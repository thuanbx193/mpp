/*
 * Copyright 2010 Rockchip Electronics S.LSI Co. LTD
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

#define LOG_TAG     "rk_malloc_test"
#include "rk_log.h"
#include "rk_malloc.h"

int main()
{
    void *tmp = NULL;

    rk_log("try memalign of 512\n");
    rk_mpp_set_memalign(512);

    tmp = rk_malloc(int, 100);
    if (tmp) {
        rk_log("malloc success\n");
        rk_free(tmp);
    } else {
        rk_log("malloc failed\n");
    }

    return 0;
}