/////////////////////////////////////////////////////////////////////////////
// Name:        pghead.cpp
// Author:      Laurent Pugin
// Created:     2017
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#include "pghead.h"

//----------------------------------------------------------------------------

#include <assert.h>

//----------------------------------------------------------------------------

namespace vrv {

//----------------------------------------------------------------------------
// PgHead
//----------------------------------------------------------------------------

PgHead::PgHead() : RunningElement("pghead-")
{
    Reset();
}

PgHead::~PgHead()
{
}

void PgHead::Reset()
{
    RunningElement::Reset();
}

//----------------------------------------------------------------------------
// Functor methods
//----------------------------------------------------------------------------
    
} // namespace vrv