/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCorePro/SteamCoreProModule.h"
#include "SteamInputTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamCoreProInputSource : uint8
{
	None = 0,
	LeftTrackpad,
	RightTrackpad,
	Joystick,
	ABXY,
	Switch,
	LeftTrigger,
	RightTrigger,
	LeftBumper,
	RightBumper,
	Gyro,
	CenterTrackpad,
	RightJoystick,
	DPad,
	Key,
	Mouse,
	LeftGyro,
	Count
};

UENUM(BlueprintType)
enum class ESteamCoreProInputSourceMode : uint8
{
	None = 0,
	Dpad,
	Buttons,
	FourButtons,
	AbsoluteMouse,
	RelativeMouse,
	JoystickMove,
	JoystickMouse,
	JoystickCamera,
	ScrollWheel,
	Trigger,
	TouchMenu,
	MouseJoystick,
	MouseRegion,
	RadialMenu,
	SingleButton,
	Switches
};

UENUM(BlueprintType)
enum ESteamCoreProInputActionOrigin
{
// Steam Controller
	EInputActionOrigin_None,
	EInputActionOrigin_SteamController_A,
	EInputActionOrigin_SteamController_B,
	EInputActionOrigin_SteamController_X,
	EInputActionOrigin_SteamController_Y,
	EInputActionOrigin_SteamController_LeftBumper,
	EInputActionOrigin_SteamController_RightBumper,
	EInputActionOrigin_SteamController_LeftGrip,
	EInputActionOrigin_SteamController_RightGrip,
	EInputActionOrigin_SteamController_Start,
	EInputActionOrigin_SteamController_Back,
	EInputActionOrigin_SteamController_LeftPad_Touch,
	EInputActionOrigin_SteamController_LeftPad_Swipe,
	EInputActionOrigin_SteamController_LeftPad_Click,
	EInputActionOrigin_SteamController_LeftPad_DPadNorth,
	EInputActionOrigin_SteamController_LeftPad_DPadSouth,
	EInputActionOrigin_SteamController_LeftPad_DPadWest,
	EInputActionOrigin_SteamController_LeftPad_DPadEast,
	EInputActionOrigin_SteamController_RightPad_Touch,
	EInputActionOrigin_SteamController_RightPad_Swipe,
	EInputActionOrigin_SteamController_RightPad_Click,
	EInputActionOrigin_SteamController_RightPad_DPadNorth,
	EInputActionOrigin_SteamController_RightPad_DPadSouth,
	EInputActionOrigin_SteamController_RightPad_DPadWest,
	EInputActionOrigin_SteamController_RightPad_DPadEast,
	EInputActionOrigin_SteamController_LeftTrigger_Pull,
	EInputActionOrigin_SteamController_LeftTrigger_Click,
	EInputActionOrigin_SteamController_RightTrigger_Pull,
	EInputActionOrigin_SteamController_RightTrigger_Click,
	EInputActionOrigin_SteamController_LeftStick_Move,
	EInputActionOrigin_SteamController_LeftStick_Click,
	EInputActionOrigin_SteamController_LeftStick_DPadNorth,
	EInputActionOrigin_SteamController_LeftStick_DPadSouth,
	EInputActionOrigin_SteamController_LeftStick_DPadWest,
	EInputActionOrigin_SteamController_LeftStick_DPadEast,
	EInputActionOrigin_SteamController_Gyro_Move,
	EInputActionOrigin_SteamController_Gyro_Pitch,
	EInputActionOrigin_SteamController_Gyro_Yaw,
	EInputActionOrigin_SteamController_Gyro_Roll,
	EInputActionOrigin_SteamController_Reserved0,
	EInputActionOrigin_SteamController_Reserved1,
	EInputActionOrigin_SteamController_Reserved2,
	EInputActionOrigin_SteamController_Reserved3,
	EInputActionOrigin_SteamController_Reserved4,
	EInputActionOrigin_SteamController_Reserved5,
	EInputActionOrigin_SteamController_Reserved6,
	EInputActionOrigin_SteamController_Reserved7,
	EInputActionOrigin_SteamController_Reserved8,
	EInputActionOrigin_SteamController_Reserved9,
	EInputActionOrigin_SteamController_Reserved10,
	
	// PS4 Dual Shock
	EInputActionOrigin_PS4_X,
	EInputActionOrigin_PS4_Circle,
	EInputActionOrigin_PS4_Triangle,
	EInputActionOrigin_PS4_Square,
	EInputActionOrigin_PS4_LeftBumper,
	EInputActionOrigin_PS4_RightBumper,
	EInputActionOrigin_PS4_Options,	//Start
	EInputActionOrigin_PS4_Share,		//Back
	EInputActionOrigin_PS4_LeftPad_Touch,
	EInputActionOrigin_PS4_LeftPad_Swipe,
	EInputActionOrigin_PS4_LeftPad_Click,
	EInputActionOrigin_PS4_LeftPad_DPadNorth,
	EInputActionOrigin_PS4_LeftPad_DPadSouth,
	EInputActionOrigin_PS4_LeftPad_DPadWest,
	EInputActionOrigin_PS4_LeftPad_DPadEast,
	EInputActionOrigin_PS4_RightPad_Touch,
	EInputActionOrigin_PS4_RightPad_Swipe,
	EInputActionOrigin_PS4_RightPad_Click,
	EInputActionOrigin_PS4_RightPad_DPadNorth,
	EInputActionOrigin_PS4_RightPad_DPadSouth,
	EInputActionOrigin_PS4_RightPad_DPadWest,
	EInputActionOrigin_PS4_RightPad_DPadEast,
	EInputActionOrigin_PS4_CenterPad_Touch,
	EInputActionOrigin_PS4_CenterPad_Swipe,
	EInputActionOrigin_PS4_CenterPad_Click,
	EInputActionOrigin_PS4_CenterPad_DPadNorth,
	EInputActionOrigin_PS4_CenterPad_DPadSouth,
	EInputActionOrigin_PS4_CenterPad_DPadWest,
	EInputActionOrigin_PS4_CenterPad_DPadEast,
	EInputActionOrigin_PS4_LeftTrigger_Pull,
	EInputActionOrigin_PS4_LeftTrigger_Click,
	EInputActionOrigin_PS4_RightTrigger_Pull,
	EInputActionOrigin_PS4_RightTrigger_Click,
	EInputActionOrigin_PS4_LeftStick_Move,
	EInputActionOrigin_PS4_LeftStick_Click,
	EInputActionOrigin_PS4_LeftStick_DPadNorth,
	EInputActionOrigin_PS4_LeftStick_DPadSouth,
	EInputActionOrigin_PS4_LeftStick_DPadWest,
	EInputActionOrigin_PS4_LeftStick_DPadEast,
	EInputActionOrigin_PS4_RightStick_Move,
	EInputActionOrigin_PS4_RightStick_Click,
	EInputActionOrigin_PS4_RightStick_DPadNorth,
	EInputActionOrigin_PS4_RightStick_DPadSouth,
	EInputActionOrigin_PS4_RightStick_DPadWest,
	EInputActionOrigin_PS4_RightStick_DPadEast,
	EInputActionOrigin_PS4_DPad_North,
	EInputActionOrigin_PS4_DPad_South,
	EInputActionOrigin_PS4_DPad_West,
	EInputActionOrigin_PS4_DPad_East,
	EInputActionOrigin_PS4_Gyro_Move,
	EInputActionOrigin_PS4_Gyro_Pitch,
	EInputActionOrigin_PS4_Gyro_Yaw,
	EInputActionOrigin_PS4_Gyro_Roll,
	EInputActionOrigin_PS4_DPad_Move,
	EInputActionOrigin_PS4_Reserved1,
	EInputActionOrigin_PS4_Reserved2,
	EInputActionOrigin_PS4_Reserved3,
	EInputActionOrigin_PS4_Reserved4,
	EInputActionOrigin_PS4_Reserved5,
	EInputActionOrigin_PS4_Reserved6,
	EInputActionOrigin_PS4_Reserved7,
	EInputActionOrigin_PS4_Reserved8,
	EInputActionOrigin_PS4_Reserved9,
	EInputActionOrigin_PS4_Reserved10,

	// XBox One
	EInputActionOrigin_XBoxOne_A,
	EInputActionOrigin_XBoxOne_B,
	EInputActionOrigin_XBoxOne_X,
	EInputActionOrigin_XBoxOne_Y,
	EInputActionOrigin_XBoxOne_LeftBumper,
	EInputActionOrigin_XBoxOne_RightBumper,
	EInputActionOrigin_XBoxOne_Menu,  //Start
	EInputActionOrigin_XBoxOne_View,  //Back
	EInputActionOrigin_XBoxOne_LeftTrigger_Pull,
	EInputActionOrigin_XBoxOne_LeftTrigger_Click,
	EInputActionOrigin_XBoxOne_RightTrigger_Pull,
	EInputActionOrigin_XBoxOne_RightTrigger_Click,
	EInputActionOrigin_XBoxOne_LeftStick_Move,
	EInputActionOrigin_XBoxOne_LeftStick_Click,
	EInputActionOrigin_XBoxOne_LeftStick_DPadNorth,
	EInputActionOrigin_XBoxOne_LeftStick_DPadSouth,
	EInputActionOrigin_XBoxOne_LeftStick_DPadWest,
	EInputActionOrigin_XBoxOne_LeftStick_DPadEast,
	EInputActionOrigin_XBoxOne_RightStick_Move,
	EInputActionOrigin_XBoxOne_RightStick_Click,
	EInputActionOrigin_XBoxOne_RightStick_DPadNorth,
	EInputActionOrigin_XBoxOne_RightStick_DPadSouth,
	EInputActionOrigin_XBoxOne_RightStick_DPadWest,
	EInputActionOrigin_XBoxOne_RightStick_DPadEast,
	EInputActionOrigin_XBoxOne_DPad_North,
	EInputActionOrigin_XBoxOne_DPad_South,
	EInputActionOrigin_XBoxOne_DPad_West,
	EInputActionOrigin_XBoxOne_DPad_East,
	EInputActionOrigin_XBoxOne_DPad_Move,
	EInputActionOrigin_XBoxOne_LeftGrip_Lower,
	EInputActionOrigin_XBoxOne_LeftGrip_Upper,
	EInputActionOrigin_XBoxOne_RightGrip_Lower,
	EInputActionOrigin_XBoxOne_RightGrip_Upper,
	EInputActionOrigin_XBoxOne_Share, // Xbox Series X controllers only
	EInputActionOrigin_XBoxOne_Reserved6,
	EInputActionOrigin_XBoxOne_Reserved7,
	EInputActionOrigin_XBoxOne_Reserved8,
	EInputActionOrigin_XBoxOne_Reserved9,
	EInputActionOrigin_XBoxOne_Reserved10,

	// XBox 360
	EInputActionOrigin_XBox360_A,
	EInputActionOrigin_XBox360_B,
	EInputActionOrigin_XBox360_X,
	EInputActionOrigin_XBox360_Y,
	EInputActionOrigin_XBox360_LeftBumper,
	EInputActionOrigin_XBox360_RightBumper,
	EInputActionOrigin_XBox360_Start,		//Start
	EInputActionOrigin_XBox360_Back,		//Back
	EInputActionOrigin_XBox360_LeftTrigger_Pull,
	EInputActionOrigin_XBox360_LeftTrigger_Click,
	EInputActionOrigin_XBox360_RightTrigger_Pull,
	EInputActionOrigin_XBox360_RightTrigger_Click,
	EInputActionOrigin_XBox360_LeftStick_Move,
	EInputActionOrigin_XBox360_LeftStick_Click,
	EInputActionOrigin_XBox360_LeftStick_DPadNorth,
	EInputActionOrigin_XBox360_LeftStick_DPadSouth,
	EInputActionOrigin_XBox360_LeftStick_DPadWest,
	EInputActionOrigin_XBox360_LeftStick_DPadEast,
	EInputActionOrigin_XBox360_RightStick_Move,
	EInputActionOrigin_XBox360_RightStick_Click,
	EInputActionOrigin_XBox360_RightStick_DPadNorth,
	EInputActionOrigin_XBox360_RightStick_DPadSouth,
	EInputActionOrigin_XBox360_RightStick_DPadWest,
	EInputActionOrigin_XBox360_RightStick_DPadEast,
	EInputActionOrigin_XBox360_DPad_North,
	EInputActionOrigin_XBox360_DPad_South,
	EInputActionOrigin_XBox360_DPad_West,
	EInputActionOrigin_XBox360_DPad_East,	
	EInputActionOrigin_XBox360_DPad_Move,
	EInputActionOrigin_XBox360_Reserved1,
	EInputActionOrigin_XBox360_Reserved2,
	EInputActionOrigin_XBox360_Reserved3,
	EInputActionOrigin_XBox360_Reserved4,
	EInputActionOrigin_XBox360_Reserved5,
	EInputActionOrigin_XBox360_Reserved6,
	EInputActionOrigin_XBox360_Reserved7,
	EInputActionOrigin_XBox360_Reserved8,
	EInputActionOrigin_XBox360_Reserved9,
	EInputActionOrigin_XBox360_Reserved10,


	// Switch - Pro or Joycons used as a single input device.
	// This does not apply to a single joycon
	EInputActionOrigin_Switch_A,
	EInputActionOrigin_Switch_B,
	EInputActionOrigin_Switch_X,
	EInputActionOrigin_Switch_Y,
	EInputActionOrigin_Switch_LeftBumper,
	EInputActionOrigin_Switch_RightBumper,
	EInputActionOrigin_Switch_Plus,	//Start
	EInputActionOrigin_Switch_Minus,	//Back
	EInputActionOrigin_Switch_Capture,
	EInputActionOrigin_Switch_LeftTrigger_Pull,
	EInputActionOrigin_Switch_LeftTrigger_Click,
	EInputActionOrigin_Switch_RightTrigger_Pull,
	EInputActionOrigin_Switch_RightTrigger_Click,
	EInputActionOrigin_Switch_LeftStick_Move,
	EInputActionOrigin_Switch_LeftStick_Click,
	EInputActionOrigin_Switch_LeftStick_DPadNorth,
	EInputActionOrigin_Switch_LeftStick_DPadSouth,
	EInputActionOrigin_Switch_LeftStick_DPadWest,
	EInputActionOrigin_Switch_LeftStick_DPadEast,
	EInputActionOrigin_Switch_RightStick_Move,
	EInputActionOrigin_Switch_RightStick_Click,
	EInputActionOrigin_Switch_RightStick_DPadNorth,
	EInputActionOrigin_Switch_RightStick_DPadSouth,
	EInputActionOrigin_Switch_RightStick_DPadWest,
	EInputActionOrigin_Switch_RightStick_DPadEast,
	EInputActionOrigin_Switch_DPad_North,
	EInputActionOrigin_Switch_DPad_South,
	EInputActionOrigin_Switch_DPad_West,
	EInputActionOrigin_Switch_DPad_East,
	EInputActionOrigin_Switch_ProGyro_Move,  // Primary Gyro in Pro Controller, or Right JoyCon
	EInputActionOrigin_Switch_ProGyro_Pitch,  // Primary Gyro in Pro Controller, or Right JoyCon
	EInputActionOrigin_Switch_ProGyro_Yaw,  // Primary Gyro in Pro Controller, or Right JoyCon
	EInputActionOrigin_Switch_ProGyro_Roll,  // Primary Gyro in Pro Controller, or Right JoyCon
	EInputActionOrigin_Switch_DPad_Move,
	EInputActionOrigin_Switch_Reserved1,
	EInputActionOrigin_Switch_Reserved2,
	EInputActionOrigin_Switch_Reserved3,
	EInputActionOrigin_Switch_Reserved4,
	EInputActionOrigin_Switch_Reserved5,
	EInputActionOrigin_Switch_Reserved6,
	EInputActionOrigin_Switch_Reserved7,
	EInputActionOrigin_Switch_Reserved8,
	EInputActionOrigin_Switch_Reserved9,
	EInputActionOrigin_Switch_Reserved10,

	// Switch JoyCon Specific
	EInputActionOrigin_Switch_RightGyro_Move,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	EInputActionOrigin_Switch_RightGyro_Pitch,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	EInputActionOrigin_Switch_RightGyro_Yaw,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	EInputActionOrigin_Switch_RightGyro_Roll,  // Right JoyCon Gyro generally should correspond to Pro's single gyro
	EInputActionOrigin_Switch_LeftGyro_Move,
	EInputActionOrigin_Switch_LeftGyro_Pitch,
	EInputActionOrigin_Switch_LeftGyro_Yaw,
	EInputActionOrigin_Switch_LeftGyro_Roll,
	EInputActionOrigin_Switch_LeftGrip_Lower, // Left JoyCon SR Button
	EInputActionOrigin_Switch_LeftGrip_Upper, // Left JoyCon SL Button
	EInputActionOrigin_Switch_RightGrip_Lower,  // Right JoyCon SL Button
	EInputActionOrigin_Switch_RightGrip_Upper,  // Right JoyCon SR Button
	EInputActionOrigin_Switch_JoyConButton_N, // With a Horizontal JoyCon this will be Y or what would be Dpad Right when vertical
	EInputActionOrigin_Switch_JoyConButton_E, // X
	EInputActionOrigin_Switch_JoyConButton_S, // A
	EInputActionOrigin_Switch_JoyConButton_W, // B
	EInputActionOrigin_Switch_Reserved15,
	EInputActionOrigin_Switch_Reserved16,
	EInputActionOrigin_Switch_Reserved17,
	EInputActionOrigin_Switch_Reserved18,
	EInputActionOrigin_Switch_Reserved19,
	EInputActionOrigin_Switch_Reserved20,
	
	// Added in SDK 1.51
	EInputActionOrigin_PS5_X,
	EInputActionOrigin_PS5_Circle,
	EInputActionOrigin_PS5_Triangle,
	EInputActionOrigin_PS5_Square,
	EInputActionOrigin_PS5_LeftBumper,
	EInputActionOrigin_PS5_RightBumper,
	EInputActionOrigin_PS5_Option,	//Start
	EInputActionOrigin_PS5_Create,		//Back
	EInputActionOrigin_PS5_Mute,
	EInputActionOrigin_PS5_LeftPad_Touch,
	EInputActionOrigin_PS5_LeftPad_Swipe,
	EInputActionOrigin_PS5_LeftPad_Click,
	EInputActionOrigin_PS5_LeftPad_DPadNorth,
	EInputActionOrigin_PS5_LeftPad_DPadSouth,
	EInputActionOrigin_PS5_LeftPad_DPadWest,
	EInputActionOrigin_PS5_LeftPad_DPadEast,
	EInputActionOrigin_PS5_RightPad_Touch,
	EInputActionOrigin_PS5_RightPad_Swipe,
	EInputActionOrigin_PS5_RightPad_Click,
	EInputActionOrigin_PS5_RightPad_DPadNorth,
	EInputActionOrigin_PS5_RightPad_DPadSouth,
	EInputActionOrigin_PS5_RightPad_DPadWest,
	EInputActionOrigin_PS5_RightPad_DPadEast,
	EInputActionOrigin_PS5_CenterPad_Touch,
	EInputActionOrigin_PS5_CenterPad_Swipe,
	EInputActionOrigin_PS5_CenterPad_Click,
	EInputActionOrigin_PS5_CenterPad_DPadNorth,
	EInputActionOrigin_PS5_CenterPad_DPadSouth,
	EInputActionOrigin_PS5_CenterPad_DPadWest,
	EInputActionOrigin_PS5_CenterPad_DPadEast,
	EInputActionOrigin_PS5_LeftTrigger_Pull,
	EInputActionOrigin_PS5_LeftTrigger_Click,
	EInputActionOrigin_PS5_RightTrigger_Pull,
	EInputActionOrigin_PS5_RightTrigger_Click,
	EInputActionOrigin_PS5_LeftStick_Move,
	EInputActionOrigin_PS5_LeftStick_Click,
	EInputActionOrigin_PS5_LeftStick_DPadNorth,
	EInputActionOrigin_PS5_LeftStick_DPadSouth,
	EInputActionOrigin_PS5_LeftStick_DPadWest,
	EInputActionOrigin_PS5_LeftStick_DPadEast,
	EInputActionOrigin_PS5_RightStick_Move,
	EInputActionOrigin_PS5_RightStick_Click,
	EInputActionOrigin_PS5_RightStick_DPadNorth,
	EInputActionOrigin_PS5_RightStick_DPadSouth,
	EInputActionOrigin_PS5_RightStick_DPadWest,
	EInputActionOrigin_PS5_RightStick_DPadEast,
	EInputActionOrigin_PS5_DPad_North,
	EInputActionOrigin_PS5_DPad_South,
	EInputActionOrigin_PS5_DPad_West,
	EInputActionOrigin_PS5_DPad_East,
	EInputActionOrigin_PS5_Gyro_Move,
	EInputActionOrigin_PS5_Gyro_Pitch,
	EInputActionOrigin_PS5_Gyro_Yaw,
	EInputActionOrigin_PS5_Gyro_Roll,
	EInputActionOrigin_PS5_DPad_Move,
	EInputActionOrigin_PS5_LeftGrip,
	EInputActionOrigin_PS5_RightGrip,
	EInputActionOrigin_PS5_LeftFn,
	EInputActionOrigin_PS5_RightFn,
	EInputActionOrigin_PS5_Reserved5,
	EInputActionOrigin_PS5_Reserved6,
	EInputActionOrigin_PS5_Reserved7,
	EInputActionOrigin_PS5_Reserved8,
	EInputActionOrigin_PS5_Reserved9,
	EInputActionOrigin_PS5_Reserved10,
	EInputActionOrigin_PS5_Reserved11,
	EInputActionOrigin_PS5_Reserved12,
	EInputActionOrigin_PS5_Reserved13,
	EInputActionOrigin_PS5_Reserved14,
	EInputActionOrigin_PS5_Reserved15,
	EInputActionOrigin_PS5_Reserved16,
	EInputActionOrigin_PS5_Reserved17,
	EInputActionOrigin_PS5_Reserved18,
	EInputActionOrigin_PS5_Reserved19,
	EInputActionOrigin_PS5_Reserved20,

	// Added in SDK 1.53
	EInputActionOrigin_SteamDeck_A,
	EInputActionOrigin_SteamDeck_B,
	EInputActionOrigin_SteamDeck_X,
	EInputActionOrigin_SteamDeck_Y,
	EInputActionOrigin_SteamDeck_L1,
	EInputActionOrigin_SteamDeck_R1,
	EInputActionOrigin_SteamDeck_Menu,
	EInputActionOrigin_SteamDeck_View,
	EInputActionOrigin_SteamDeck_LeftPad_Touch,
	EInputActionOrigin_SteamDeck_LeftPad_Swipe,
	EInputActionOrigin_SteamDeck_LeftPad_Click,
	EInputActionOrigin_SteamDeck_LeftPad_DPadNorth,
	EInputActionOrigin_SteamDeck_LeftPad_DPadSouth,
	EInputActionOrigin_SteamDeck_LeftPad_DPadWest,
	EInputActionOrigin_SteamDeck_LeftPad_DPadEast,
	EInputActionOrigin_SteamDeck_RightPad_Touch,
	EInputActionOrigin_SteamDeck_RightPad_Swipe,
	EInputActionOrigin_SteamDeck_RightPad_Click,
	EInputActionOrigin_SteamDeck_RightPad_DPadNorth,
	EInputActionOrigin_SteamDeck_RightPad_DPadSouth,
	EInputActionOrigin_SteamDeck_RightPad_DPadWest,
	EInputActionOrigin_SteamDeck_RightPad_DPadEast,
	EInputActionOrigin_SteamDeck_L2_SoftPull,
	EInputActionOrigin_SteamDeck_L2,
	EInputActionOrigin_SteamDeck_R2_SoftPull,
	EInputActionOrigin_SteamDeck_R2,
	EInputActionOrigin_SteamDeck_LeftStick_Move,
	EInputActionOrigin_SteamDeck_L3,
	EInputActionOrigin_SteamDeck_LeftStick_DPadNorth,
	EInputActionOrigin_SteamDeck_LeftStick_DPadSouth,
	EInputActionOrigin_SteamDeck_LeftStick_DPadWest,
	EInputActionOrigin_SteamDeck_LeftStick_DPadEast,
	EInputActionOrigin_SteamDeck_LeftStick_Touch,
	EInputActionOrigin_SteamDeck_RightStick_Move,
	EInputActionOrigin_SteamDeck_R3,
	EInputActionOrigin_SteamDeck_RightStick_DPadNorth,
	EInputActionOrigin_SteamDeck_RightStick_DPadSouth,
	EInputActionOrigin_SteamDeck_RightStick_DPadWest,
	EInputActionOrigin_SteamDeck_RightStick_DPadEast,
	EInputActionOrigin_SteamDeck_RightStick_Touch,
	EInputActionOrigin_SteamDeck_L4,
	EInputActionOrigin_SteamDeck_R4,
	EInputActionOrigin_SteamDeck_L5,
	EInputActionOrigin_SteamDeck_R5,
	EInputActionOrigin_SteamDeck_DPad_Move,
	EInputActionOrigin_SteamDeck_DPad_North,
	EInputActionOrigin_SteamDeck_DPad_South,
	EInputActionOrigin_SteamDeck_DPad_West,
	EInputActionOrigin_SteamDeck_DPad_East,
	EInputActionOrigin_SteamDeck_Gyro_Move,
	EInputActionOrigin_SteamDeck_Gyro_Pitch,
	EInputActionOrigin_SteamDeck_Gyro_Yaw,
	EInputActionOrigin_SteamDeck_Gyro_Roll,
	EInputActionOrigin_SteamDeck_Reserved1,
	EInputActionOrigin_SteamDeck_Reserved2,
	EInputActionOrigin_SteamDeck_Reserved3,
	EInputActionOrigin_SteamDeck_Reserved4,
	EInputActionOrigin_SteamDeck_Reserved5,
	EInputActionOrigin_SteamDeck_Reserved6,
	EInputActionOrigin_SteamDeck_Reserved7,
	EInputActionOrigin_SteamDeck_Reserved8,
	EInputActionOrigin_SteamDeck_Reserved9,
	EInputActionOrigin_SteamDeck_Reserved10,
	EInputActionOrigin_SteamDeck_Reserved11,
	EInputActionOrigin_SteamDeck_Reserved12,
	EInputActionOrigin_SteamDeck_Reserved13,
	EInputActionOrigin_SteamDeck_Reserved14,
	EInputActionOrigin_SteamDeck_Reserved15,
	EInputActionOrigin_SteamDeck_Reserved16,
	EInputActionOrigin_SteamDeck_Reserved17,
	EInputActionOrigin_SteamDeck_Reserved18,
	EInputActionOrigin_SteamDeck_Reserved19,
	EInputActionOrigin_SteamDeck_Reserved20,

	EInputActionOrigin_Count, // If Steam has added support for new controllers origins will go here.
	EInputActionOrigin_MaximumPossibleValue = 32767, // Origins are currently a maximum of 16 bits.
};

UENUM(BlueprintType)
enum class ESteamCoreProXboxOrigin : uint8
{
	A = 0,
	B,
	X,
	Y,
	LeftBumper,
	RightBumper,
	Menu,
	View,
	LeftTrigger_Pull,
	LeftTrigger_Click,
	RightTrigger_Pull,
	RightTrigger_Click,
	LeftStick_Move,
	LeftStick_Click,
	LeftStick_DPadNorth,
	LeftStick_DPadSouth,
	LeftStick_DPadWest,
	LeftStick_DPadEast,
	RightStick_Move,
	RightStick_Click,
	RightStick_DPadNorth,
	RightStick_DPadSouth,
	RightStick_DPadWest,
	RightStick_DPadEast,
	DPad_North,
	DPad_South,
	DPad_West,
	DPad_East,
	Count,
};

UENUM(BlueprintType)
enum class ESteamCoreProControllerPad : uint8
{
	Left = 0,
	Right
};

UENUM(BlueprintType)
enum class ESteamCoreProInputType : uint8
{
	Unknown = 0,
	SteamController,
	XBox360Controller,
	XBoxOneController,
	GenericGamepad,		// DirectInput controllers
	PS4Controller,
	AppleMFiController,	// Unused
	AndroidController,	// Unused
	SwitchJoyConPair,		// Unused
	SwitchJoyConSingle,	// Unused
	SwitchProController,
	MobileTouch,			// Steam Link App On-screen Virtual Controller
	PS3Controller,		// Currently uses PS4 Origins
	PS5Controller,		// Added in SDK 151
	SteamDeckController,	// Added in SDK 153
	Count,
	MaximumPossibleValue = 255,
};

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamCoreProInputLEDFlag : uint8
{
	SetColor = 0,
	RestoreUserDefault
};

// Individual values are used by the GetSessionInputConfigurationSettings bitmask
UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamCoreInputConfigurationEnableType : uint8
{
	k_ESteamInputConfigurationEnableType_None = 0x0000,
	k_ESteamInputConfigurationEnableType_Playstation = 0x0001,
	k_ESteamInputConfigurationEnableType_Xbox = 0x0002,
	k_ESteamInputConfigurationEnableType_Generic = 0x0004,
	k_ESteamInputConfigurationEnableType_Switch = 0x0008,
};

UENUM(BlueprintType)
enum class EScePadTriggerEffectMode : uint8
{
	SCE_PAD_TRIGGER_EFFECT_MODE_OFF,
	SCE_PAD_TRIGGER_EFFECT_MODE_FEEDBACK,
	SCE_PAD_TRIGGER_EFFECT_MODE_WEAPON,
	SCE_PAD_TRIGGER_EFFECT_MODE_VIBRATION,
	SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_FEEDBACK,
	SCE_PAD_TRIGGER_EFFECT_MODE_SLOPE_FEEDBACK,
	SCE_PAD_TRIGGER_EFFECT_MODE_MULTIPLE_POSITION_VIBRATION,
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 *E  
 *  @brief parameter for setting the trigger effect to off mode.
 *         Off Mode: Stop trigger effect.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectOffParam
{
	GENERATED_BODY()
};

/**
 *E  
 *  @brief parameter for setting the trigger effect to Feedback mode.
 *         Feedback Mode: The motor arm pushes back trigger.
 *                        Trigger obtains stiffness at specified position.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectFeedbackParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectFeedbackParam()
		: Position(0)
		  , Strength(0)
	{
	}

public:
	/*E position where the strength of target trigger start changing(0~9). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 Position;
	/*E strength that the motor arm pushes back target trigger(0~8 (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 Strength;
};

/**
 *E  
 *  @brief parameter for setting the trigger effect to Weapon mode.
 *         Weapon Mode: Emulate weapon like gun trigger.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectWeaponParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectWeaponParam()
		: StartPosition(0)
		  , EndPosition(0)
		  , Strength(0)
	{
	}

public:
	/*E position where the stiffness of trigger start changing(2~7). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 StartPosition;
	/*E position where the stiffness of trigger finish changing(startPosition+1~8). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 EndPosition;
	/*E strength of gun trigger(0~8 (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 Strength;
};

/**
 *E  
 *  @brief parameter for setting the trigger effect to Vibration mode.
 *         Vibration Mode: Vibrates motor arm around specified position.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectVibrationParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectVibrationParam()
		: Position(0)
		  , Amplitude(0)
		  , Frequency(0)
	{
	}

public:
	/*E position where the motor arm start vibrating(0~9). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 Position;
	/*E vibration amplitude(0~8 (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 Amplitude;
	/*E vibration frequency(0~255[Hz] (0: Same as Off mode)). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 Frequency;
};

/**
 *E  
 *  @brief parameter for setting the trigger effect to ScePadTriggerEffectMultiplePositionFeedbackParam mode.
 *         Multi Position Feedback Mode: The motor arm pushes back trigger.
 *                                       Trigger obtains specified stiffness at each control point.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectMultiplePositionFeedbackParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectMultiplePositionFeedbackParam()
	{
		Strength.AddDefaulted(10);
	}

public:
	/*E strength that the motor arm pushes back target trigger at position(0~8 (0: Same as Off mode)).
	 *  strength[0] means strength of motor arm at position0.
	 *  strength[1] means strength of motor arm at position1.
	 * */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	TArray<int32> Strength;
};

/**
 *E  
 *  @brief parameter for setting the trigger effect to Feedback3 mode.
 *         Slope Feedback Mode: The motor arm pushes back trigger between two spedified control points.
 *                              Stiffness of the trigger is changing depending on the set place.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectSlopeFeedbackParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectSlopeFeedbackParam()
		: StartPosition(0)
		  , EndPosition(0)
		  , StartStrength(0)
		  , EndStrength(0)
	{
	}

public:
	/*E position where the strength of target trigger start changing(0~endPosition). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 StartPosition;
	/*E position where the strength of target trigger finish changing(startPosition+1~9). */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 EndPosition;
	/*E strength when trigger's position is startPosition(1~8) */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 StartStrength;
	/*E strength when trigger's position is endPosition(1~8) */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 EndStrength;
};

/**
 *E  
 *  @brief parameter for setting the trigger effect to Vibration2 mode.
 *         Multi Position Vibration Mode: Vibrates motor arm around specified control point.
 *                                        Trigger vibrates specified amplitude at each control point.
 **/
USTRUCT(BlueprintType)
struct FScePadTriggerEffectMultiplePositionVibrationParam
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectMultiplePositionVibrationParam()
		: Frequency(0)
	{
		Amplitude.AddDefaulted(8);
	}

public:
	/*E vibration frequency(0~255 (0: Same as Off mode)) */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	int32 Frequency;
	/*E vibration amplitude at position(0~8 (0: Same as Off mode)).
	 *  amplitude[0] means amplitude of vibration at position0.
	 *  amplitude[1] means amplitude of vibration at position1.
	 *  ...
	 * */
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	TArray<int32> Amplitude;
};

USTRUCT(BlueprintType)
struct FScePadTriggerEffectCommandData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectOffParam OffParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectFeedbackParam FeedbackParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectWeaponParam WeaponParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectVibrationParam VibrationParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectMultiplePositionFeedbackParam MultiplePositionFeedbackParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectSlopeFeedbackParam SlopeFeedbackParam;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectMultiplePositionVibrationParam MultiplePositionVibrationParam;
};

USTRUCT(BlueprintType)
struct FScePadTriggerEffectCommand
{
	GENERATED_BODY()
public:
	FScePadTriggerEffectCommand()
		: Mode(EScePadTriggerEffectMode::SCE_PAD_TRIGGER_EFFECT_MODE_OFF)
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	EScePadTriggerEffectMode Mode;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	FScePadTriggerEffectCommandData CommandData;
};

USTRUCT(BlueprintType)
struct FInputAnalogActionData
{
	GENERATED_BODY()
public:
	FInputAnalogActionData()
		: Mode(ESteamCoreProInputSourceMode::None)
		  , X(0)
		  , Y(0)
		  , bActive(false)
	{
	}

#if WITH_STEAMCORE
	FInputAnalogActionData(const InputAnalogActionData_t& Data)
		: Mode(static_cast<ESteamCoreProInputSourceMode>(Data.eMode))
		  , X(Data.x)
		  , Y(Data.y)
		  , bActive(Data.bActive)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	ESteamCoreProInputSourceMode Mode;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float X;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float Y;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	bool bActive;
};

USTRUCT(BlueprintType)
struct FInputDigitalActionData
{
	GENERATED_BODY()
public:
	FInputDigitalActionData()
		: bState(false)
		  , bActive(false)
	{
	}

#if WITH_STEAMCORE
	FInputDigitalActionData(const InputDigitalActionData_t& Data)
		: bState(Data.bState)
		  , bActive(Data.bActive)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	bool bState;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	bool bActive;
};

USTRUCT(BlueprintType)
struct FInputMotionData
{
	GENERATED_BODY()
public:
	FInputMotionData()
		: RotQuatX(0)
		  , RotQuatY(0)
		  , RotQuatZ(0)
		  , RotQuatW(0)
		  , PosAccelX(0)
		  , PosAccelY(0)
		  , PosAccelZ(0)
		  , RotVelX(0)
		  , RotVelY(0)
		  , RotVelZ(0)
	{
	}

#if WITH_STEAMCORE
	FInputMotionData(const InputMotionData_t& Data)
		: RotQuatX(Data.rotQuatX)
		  , RotQuatY(Data.rotQuatY)
		  , RotQuatZ(Data.rotQuatZ)
		  , RotQuatW(Data.rotQuatW)
		  , PosAccelX(Data.posAccelX)
		  , PosAccelY(Data.posAccelY)
		  , PosAccelZ(Data.posAccelZ)
		  , RotVelX(Data.rotVelX)
		  , RotVelY(Data.rotVelY)
		  , RotVelZ(Data.rotVelZ)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatZ;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotQuatW;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float PosAccelX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float PosAccelY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float PosAccelZ;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotVelX;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotVelY;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Input")
	float RotVelZ;
};

USTRUCT(BlueprintType)
struct STEAMCOREPRO_API FInputHandle
{
	GENERATED_BODY()
public:
	FInputHandle()
		: m_Value(0)
	{
	}

	FInputHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct STEAMCOREPRO_API FInputActionSetHandle
{
	GENERATED_BODY()
public:
	FInputActionSetHandle()
		: m_Value(0)
	{
	}

	FInputActionSetHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct STEAMCOREPRO_API FInputDigitalActionHandle
{
	GENERATED_BODY()
public:
	FInputDigitalActionHandle()
		: m_Value(0)
	{
	}

	FInputDigitalActionHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct STEAMCOREPRO_API FInputAnalogActionHandle
{
	GENERATED_BODY()
public:
	FInputAnalogActionHandle()
		: m_Value(0)
	{
	}

	FInputAnalogActionHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	uint64 GetValue() const { return m_Value; }
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
private:
	uint64 m_Value;
};
