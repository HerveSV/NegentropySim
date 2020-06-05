//
//  NegentropyApplication.cpp
//  NegentropySim
//
//  Created by Hervé Schmit-Veiler on 6/5/20.
//  Copyright © 2020 Hervé Schmit-Veiler. All rights reserved.
//

#include "NegentropyApplication.hpp"

using namespace Crude;

NegentropyApplication::NegentropyApplication()
: Application()
{
    pushLayer(new PhysicsLayer);
}
