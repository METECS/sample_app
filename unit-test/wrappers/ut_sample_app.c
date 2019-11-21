/*
**  GSC-18128-1, "Core Flight Executive Version 6.6"
**
**  Copyright (c) 2006-2019 United States Government as represented by
**  the Administrator of the National Aeronautics and Space Administration.
**  All Rights Reserved.
**
**  Licensed under the Apache License, Version 2.0 (the "License");
**  you may not use this file except in compliance with the License.
**  You may obtain a copy of the License at
**
**    http://www.apache.org/licenses/LICENSE-2.0
**
**  Unless required by applicable law or agreed to in writing, software
**  distributed under the License is distributed on an "AS IS" BASIS,
**  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**  See the License for the specific language governing permissions and
**  limitations under the License.
*/

/*
** File: ut_sample_app.c
**
** Purpose:
** Code Unit from SAMPLE Application tuned for unit testing
**
** Notes:
** This duplicates a source code unit from the main FSW,
** but adds additional "scaffolding" around the FSW so it can be
** tested.  This includes implementation of any "accessor" methods
** that allow the UT test cases to access private data structures
** within the code unit.
**
** Also, unlike the FSW code,  this module should be compiled with
** coverage instrumentation flags if the toolchain supports it
** (i.e. -pg --coverage on gcc).  It is also compiled with an
** alternate include path, such that locally-provided "overrides"
** of header files will take precedence over include files of the
** same name.
*/
#include "ut_sample_app.h"

/*
 * Now include all extra logic required to stub-out subsequent calls to
 * library functions and replace with our own
 */
#include "sample_app.c"

