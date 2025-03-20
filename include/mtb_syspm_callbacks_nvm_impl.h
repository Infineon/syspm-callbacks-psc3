/***************************************************************************//**
* \file mtb_syspm_callbacks_nvm.h
*
* Description:
* Provides a high level interface for syspm callbacks for the NVM IP.
*
********************************************************************************
* \copyright
* Copyright 2024-2024 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation
*
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once

#if defined (CY_IP_MXFLASHC_VERSION_ECT) || defined (CY_IP_MXS40FLASHC)
#include "mtb_syspm_callbacks_nvm_flashc.h"
#elif defined (CY_IP_MXS22RRAMC)
#include "mtb_syspm_callbacks_nvm_mxs22rramc.h"
#else
#error "Unhandled version"
#endif
