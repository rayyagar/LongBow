/*
 * Copyright (c) 2013-2014, Xerox Corporation (Xerox) and Palo Alto Research Center (PARC)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Patent rights are not granted under this agreement. Patent rights are
 *       available under FRAND terms.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL XEROX or PARC BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/**
 * @file longBow_TestFixtureConfig.h
 * @ingroup testing
 * @brief The Test Fixture configuration interface
 *
 * @author Glenn Scott, Palo Alto Research Center (Xerox PARC)
 * @copyright 2013-2014, Xerox Corporation (Xerox) and Palo Alto Research Center (PARC).  All rights reserved.
 */
#ifndef LongBow_longBow_FixtureConfig_h
#define LongBow_longBow_FixtureConfig_h
#include <stdbool.h>

struct longbow_fixture_config {
    char *name;

    bool enabled;
};
typedef struct longbow_fixture_config LongBowTestFixtureConfig;

/**
 * Create and initialise a LongBowTestFixtureConfig instance.
 *
 * @param [in] name The name of the Test Fixture
 * @param [in] enabled True if the fixture is enabled, false otherwise.
 *
 * @return non-NULL A pointer to an allocated `LongBowTestFixtureConfig` isntance that must be destroyed via `longBowTestFixtureConfig_Destroy`.
 * @return NULL An error occurred.
 *
 * Example:
 * @code
 * {
 *     <#example#>
 * }
 * @endcode
 *
 * @see longBowTestFixtureConfig_Destroy
 */
LongBowTestFixtureConfig *longBowTestFixtureConfig_Create(const char *name, bool enabled);

/**
 * Destroy a LongBowTestFixtureConfig intance.
 *
 * @param [in,out] configPtr A pointer to a pointer to a `LongBowTestFixtureConfig` instance.
 *
 * Example:
 * @code
 * {
 *     <#example#>
 * }
 * @endcode
 *
 * @see longBowTestFixtureConfig_Create
 */
void longBowTestFixtureConfig_Destroy(LongBowTestFixtureConfig **configPtr);
#endif // LongBow_longBow_FixtureConfig_h
