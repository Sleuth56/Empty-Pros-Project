#include "main.h"

// Defining Controllers
pros::Controller master (CONTROLLER_MASTER);
pros::Controller partner (CONTROLLER_PARTNER);

// Defining motors
pros::Motor FRDrive (FRDrivePort, pros::E_MOTOR_GEARSET_18, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor FLDrive (FLDrivePort, pros::E_MOTOR_GEARSET_18, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor BRDrive (BRDrivePort, pros::E_MOTOR_GEARSET_18, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor BLDrive (BLDrivePort, pros::E_MOTOR_GEARSET_18, pros::E_MOTOR_ENCODER_DEGREES);