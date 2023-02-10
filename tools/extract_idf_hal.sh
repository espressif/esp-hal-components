#!/bin/bash

set -eux

# ESP_HAL_URL
# IDF_URL

# Usage: clone_idf
clone_idf() {
    rm -rf download_idf
    git clone --single-branch --branch master ${IDF_URL} download_idf
}

# Usage: extract_hal BRANCH_NAME ARG
extract_hal() {
    if [[ $# != 2 ]]; then
        die "Invalid arg"
    fi

    BRANCH_NAME=$1
    ARG=$2

    echo "Extract to branch $1 with arg list: '$2'"

    FOLDER_NAME="esp-idf-$1"

    rm -rf ${FOLDER_NAME}
    cp -r download_idf ${FOLDER_NAME}

    cd ${FOLDER_NAME}
    git filter-repo $2

    git checkout -B $1
    git push ${ESP_HAL_URL} ${BRANCH_NAME}
}

# Usage get_arg_by_components [COMPONENTS...]
get_arg_by_components() {
    RET=""
    for COMPONENT in $*
    do
        # There will be an redundant trailing space
        RET+="--path components/${COMPONENT} "
    done
    echo ${RET}
}

clone_idf

LIC_ARG="--path LICENSE "

# The commits have the same SHA as long as the commit author, date, message and change list are the same.
# Any modification to the strategy will create new branch that cannot be merged (pushed) to the existing one.
ARG="${LIC_ARG} $(get_arg_by_components soc hal esp_hw_support esp_system efuse log)"
extract_hal "sync-1-master" "${ARG}"

# Add new one below if you have new requirement

# Push to protected branch will cause that branch to appear on Github.
# Try with non-protected branch first.
# ARG="${LIC_ARG} $(get_arg_by_components soc hal esp_hw_support esp_system efuse log)"
# extract_hal "test-sync-1-master" ${ARG}

