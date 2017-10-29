/*
 * Copyright (C) 2015 The CyanogenMod Project
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

#define LOG_TAG "MTKPower-xen0n"
#include <cutils/log.h>

#include <hardware/power.h>
#include "power-feature.h"

void set_device_specific_feature(struct power_module *module,
    feature_t feature, int state)
{
    ALOGD("set_device_specific_feature(%p, %d, %d): stub!", module, feature, state);
}
