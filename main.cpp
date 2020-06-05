//
//  main.cpp
//  NegentropySim
//
//  Created by Hervé Schmit-Veiler on 6/4/20.
//  Copyright © 2020 Hervé Schmit-Veiler. All rights reserved.
//

#include "NegentropyApplication.hpp"

int main(int argc, const char * argv[])
{
    
    std::unique_ptr<NegentropyApplication> app = std::make_unique<NegentropyApplication>();
    app->Run();
    
}
