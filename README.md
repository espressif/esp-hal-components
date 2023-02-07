# esp-hal

HAL (Hardware Abstraction Layer) for Espressif chips.

Currently the branches are all synchronized from IDF by scripts under given rules. No manual maintainence.

## Branch naming convention

sync-[name]-[branch]

Where:

- `sync` means this is a branch maintained by the script. Will not be able to be merged with each other.
- `[name]`: either a number (whose file list will be described somewhere), or a single component (in case someone need it...)
- `[branch]`: the IDF branch to sync from, e.g. `master`, `v4.4`

## Existing branches

- `sync-1-master`:
    - Based on IDF `master` branch.
    - Includes components: `soc`, `hal`, `esp_hw_support`, `esp_system`, `efuse`, `log`.

## Restrictions

1. Sync branches don't have common ancestors

   This may cause some problem when you merge or pick from these branches

2. Can't easily add more files to a existing branch

   The generated commits have the same SHA as long as the commit author, date, message and change list are the same.

   Any modification to the script strategy will create new branch that cannot be merged (pushed) to the existing one.

   When we need to include more files, or modify any part of the commit, it's suggested to create a new branch.
