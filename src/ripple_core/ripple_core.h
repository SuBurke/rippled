//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================


#ifndef RIPPLE_CORE_H_INCLUDED
#define RIPPLE_CORE_H_INCLUDED

#include "../ripple_basics/ripple_basics.h"
#include "../ripple_data/ripple_data.h"

#include "beast/beast/http/URL.h" // for Config


#include "nodestore/NodeStore.h"

namespace ripple
{

// Order matters

# include "functional/ConfigSections.h"
#include "functional/Config.h"
#include "functional/LoadFeeTrack.h"
#  include "functional/LoadEvent.h"
#  include "functional/LoadMonitor.h"
# include "functional/Job.h"
#include "functional/JobQueue.h"
# include "functional/LoadType.h"
#include "functional/LoadSource.h"

}

#endif
