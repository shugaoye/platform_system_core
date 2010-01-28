
/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _FORMAT_H
#define _FORMAT_H

#define FORMAT_TYPE_EXT4    "ext4"
#define FORMAT_TYPE_EXT3    "ext3"
#define FORMAT_TYPE_EXT2    "ext2"
#define FORMAT_TYPE_FAT32   "fat32"
#define FORMAT_TYPE_UNKNOWN "unknown"
int format_partition(blkdev_t *part, char *type);
int initialize_mbr(blkdev_t *disk);
#endif
