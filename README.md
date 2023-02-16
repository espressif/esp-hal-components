# esp-hal-components

HAL (Hardware Abstraction Layer) components for Espressif chips.

Currently the branches are all synchronized from IDF by scripts under given rules.

Except from the scripts, no manual development will happen here.

## Branch naming convention

sync-[name]-[branch]

Where:

- `sync` means this is a branch maintained by the script. Will not be able to be merged with each other.
- `[name]`: either a number (whose file list will be described somewhere), or a single component (in case someone need it...)
- `[branch]`: the IDF branch to sync from, e.g. `master`, `v4.4`

## Existing branches

- [`sync-1-master`](../../tree/sync-1-master):
    - Based on IDF `master` branch.
    - Includes components: `soc`, `hal`, `esp_hw_support`, `esp_system`, `efuse`, `log`.

## Restrictions

1. Sync branches don't have common ancestors

   This may cause some problem when you merge or pick from these branches

2. Can't easily modify the file list of a existing branch

   The tool used by the sync script converts commits of IDF into new ones on the given branch. The history is kept while the files are filterd according to the given file list.

   The generated commits will have the same SHA as long as the commit author, date, message and change list are the same.

   Any modification to the script strategy of a sync branch (including modifying the file list) will change the SHA of the commits, forbidding the generated branch being merged (pushed) to the existing one.

   When we need to modify the file list or any other part of the commit, it's suggested to create a new branch.
