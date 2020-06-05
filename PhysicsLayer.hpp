//
//  PhysicsLayer.hpp
//  NegentropySim
//
//  Created by Hervé Schmit-Veiler on 6/5/20.
//  Copyright © 2020 Hervé Schmit-Veiler. All rights reserved.
//

#ifndef PhysicsLayer_hpp
#define PhysicsLayer_hpp

#include "NegentropySim/CrudeRender/CrudeRender/src/CrudeRender.h"
#include "NegentropySim/CrudeRender/CrudeRender/src/CrudeRenderUtils.h"

class PhysicsLayer : public Crude::Layer
{
public:
    PhysicsLayer();
    
    virtual void onAttach() override;
    
    virtual void onDetach() override;
    
    virtual void onUpdate(Crude::Timestep deltaTime) override;
    
    virtual void onImGuiRender() override;
    
    virtual void onEvent(Crude::Event& event) override;
private:
    bool onWindowResizeEvent(Crude::WindowResizeEvent& event);
};

#endif /* PhysicsLayer_hpp */
