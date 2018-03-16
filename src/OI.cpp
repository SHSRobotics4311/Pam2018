// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/FlipForward.h"
#include "Commands/FlipBack.h"
#include "Commands/StopFlip.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    joystick1.reset(new frc::Joystick(0));
    
    //butt1.reset(new frc::JoystickButton(joystick1.get(), 1));
    //butt1->WhileHeld(new AutonomousCommand());
    butt2.reset(new frc::JoystickButton(joystick1.get(), 2));
    butt2->WhenPressed(new FlipBack());
    butt2->WhenReleased(new StopFlip());
    butt4.reset(new frc::JoystickButton(joystick1.get(), 4));
    butt4->WhenPressed(new FlipForward());
    butt4->WhenReleased(new StopFlip());

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getJoystick1() {
   return joystick1;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
