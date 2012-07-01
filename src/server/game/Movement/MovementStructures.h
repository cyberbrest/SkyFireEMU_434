/*
 * Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2011-2012 Project SkyFire <http://www.projectskyfire.org/>
 * Copyright (C) 2005-2012 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MOVEMENT_STRUCTURES_H
#define _MOVEMENT_STRUCTURES_H

enum MovementStatusElements
{
	MSEPositionX,
    MSEPositionY,
    MSEPositionZ,

	MSEhasPositionOBit,				//	Have Position(orientation) 
	MSEhasFlagsBit,						//	Have Flag == 0
	MSEhasExtraFlagsBit,				//	Have Extra Flags ==0
	MSEhasLivingTimeBit,				//  HaveTimestamp
    MSEhasPitch,					//  Have Pitch v8 ==0
	MSEhasSplineElevationBit,
	MSEhasInterPolatedTurningBit,		// Have interPolatedTurning
    MSEhasJumpingBit,					// Have Jumping
    MSEhasTransportDataBit,			// Have TrasportData v56
	MSEhasGuidBit0,
    MSEhasGuidBit1,
    MSEhasGuidBit2,
    MSEhasGuidBit3,
    MSEhasGuidBit4,
    MSEhasGuidBit5,
    MSEhasGuidBit6,
    MSEhasGuidBit7,
    MSEhasTransportTime2Bit,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit1,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit7,
   
	MSEFlagsData,
	MSEExtraFlagsData,
    MSEGuidByte0,
    MSEGuidByte1,
    MSEGuidByte2,
    MSEGuidByte3,
    MSEGuidByte4,
    MSEGuidByte5,
    MSEGuidByte6,
    MSEGuidByte7,
    
    MSETransportGuidByte0,
    MSETransportGuidByte1,
    MSETransportGuidByte2,
    MSETransportGuidByte3,
    MSETransportGuidByte4,
    MSETransportGuidByte5,
    MSETransportGuidByte6,
    MSETransportGuidByte7,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
	MSETransportSeat,
    MSETransportTime,
    MSETransportTime2,
    MSETransportTime3,
	
	MSEFallTime,
    MSEFallStartVelocity,
    MSEJumpVelocity,
    MSEJumpCosAngle,
    MSEJumpSinAngle,
    

	MSETimestampData,
	MSESplineElevData,
	MSESwiming,
	MSEPositionO,
	
	MSEhasUnknownBit0,
	MSEhasUnknownBit1,
	MSEhasUnknownBit2,
	MSEhasUnknownBit3,
	MSEhasUnknownBit4,
	MSEhasUnknownBit5,
	MSEhasUnknownBit6,
	MSEhasUnknownBit7,

	MSEhas148_Bit,
	MSEhas149_Bit,
	MSE_END,
    MSE_COUNT
};
//4.2.2
MovementStatusElements PlayerMoveSequence[] = {
    MSE_END,
};
//4.2.2
MovementStatusElements MovementFallLandSequence[] = {
	MSE_END,
};
// 4.3.4
MovementStatusElements MovementHeartBeatSequence[] = {
	MSEPositionX,
	MSEPositionY,
	MSEPositionZ,
	MSEhasTransportDataBit,
	MSEhasGuidBit7,
	MSEhasGuidBit1,
	MSEhasExtraFlagsBit,
	MSEhasGuidBit3,
	MSEhasUnknownBit0,
	MSEhasPositionOBit,
	MSEhasGuidBit6,
	MSEhasLivingTimeBit,
	MSEhas148_Bit,
	MSEhasUnknownBit1,
	MSEhasGuidBit4,
	MSEhas149_Bit,
	MSEhasGuidBit5,
	MSEhasFlagsBit,
	MSEhasInterPolatedTurningBit,
	MSEhasGuidBit2,
	MSEhasGuidBit0,
	MSEhasTransportGuidBit0,
	MSEhasTransportGuidBit5,
	MSEhasTransportGuidBit3,
	MSEhasTransportGuidBit2,
	MSEhasTransportTime2Bit,
	MSEhasTransportTime3Bit,
	MSEhasTransportGuidBit6,
	MSEhasTransportGuidBit4,
	MSEhasTransportGuidBit1,
	MSEhasTransportGuidBit7,
	MSEExtraFlagsData,
	MSEFlagsData,
	MSEhasJumpingBit,
	MSEGuidByte1,
	MSEGuidByte7,
	MSEGuidByte4,
	MSEGuidByte3,
	MSEGuidByte6,
	MSEGuidByte0,
	MSEGuidByte2,
	MSEGuidByte5,
	MSETransportTime,
	MSETransportPositionZ,
	MSETransportPositionY,
	MSETransportPositionX,
	MSETransportGuidByte5,
	MSETransportTime3,
	MSETransportGuidByte1,
	MSETransportSeat,
	MSETransportTime2,
	MSETransportGuidByte4,
	MSETransportPositionO,
	MSETransportGuidByte0,
	MSETransportGuidByte7,
	MSETransportGuidByte3,
	MSETransportGuidByte6,
	MSETransportGuidByte2,
	MSEFallStartVelocity,
	MSEFallTime,
	MSEJumpCosAngle, 
	MSEJumpVelocity, 
	MSEJumpSinAngle,
	MSESwiming,
	MSETimestampData,
	MSESplineElevData,
	MSEPositionO,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementJumpSequence[] = {
    MSEPositionY,
    MSEPositionX,
    MSEPositionZ,
    MSEhasLivingTimeBit,
    MSEhasGuidBit5,
    MSEhasFlagsBit,
    MSEhasGuidBit4,
    MSEhasGuidBit6,
    MSEhasExtraFlagsBit,
    MSEhasGuidBit0,
    MSEhasTransportDataBit,
    MSEhasUnknownBit0,
    MSEhasGuidBit3,
    MSEhasGuidBit7,
    MSEhasInterPolatedTurningBit,
    MSEhas148_Bit,
    MSEhasPositionOBit,
    MSEhasGuidBit1,
    MSEhasUnknownBit2,
    MSEhas149_Bit,
    MSEhasGuidBit2,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit1,
    MSEhasTransportTime3Bit,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit2,
    MSEhasJumpingBit,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEGuidByte6,
    MSEGuidByte5,
    MSEGuidByte4, 
    MSEGuidByte0,
    MSEGuidByte2,
    MSEGuidByte3,
    MSEGuidByte7,
    MSEGuidByte1,
    MSETransportGuidByte1,
    MSETransportGuidByte7,
    MSETransportPositionX,
    MSETransportGuidByte4,
    MSETransportTime3,
    MSETransportGuidByte0,
    MSETransportPositionO,
    MSETransportTime2,
    MSETransportTime,
    MSETransportGuidByte6,
    MSETransportPositionZ,
    MSETransportSeat,
    MSETransportPositionY,
    MSETransportGuidByte3,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSESwiming,
    MSETimestampData,
    MSEJumpSinAngle,
    MSEJumpCosAngle,
    MSEJumpVelocity,
    MSEFallStartVelocity,
    MSEFallTime,
    MSESplineElevData,
    MSEPositionO,
	MSE_END,
};
//4.2.2
MovementStatusElements MovementSetFacingSequence[] = {
	MSE_END,
};
//4.2.2
MovementStatusElements MovementSetPitchSequence[] = {
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStartBackwardSequence[] = {
	MSEPositionX,
	MSEPositionZ,
	MSEPositionY,
	MSEhasTransportDataBit,
	MSEhasGuidBit3,
	MSEhasGuidBit0,
	MSEhasGuidBit2,
	MSEhasLivingTimeBit,
	MSEhasGuidBit7,
	MSEhasUnknownBit0,
	MSEhas149_Bit,
	MSEhasPositionOBit,
	MSEhasFlagsBit,
	MSEhas148_Bit,
	MSEhasInterPolatedTurningBit,
	MSEhasExtraFlagsBit,
	MSEhasGuidBit5,
	MSEhasGuidBit1,
	MSEhasGuidBit4,
	MSEhasGuidBit6,
	MSEhasUnknownBit3,
	MSEhasTransportGuidBit3,
	MSEhasTransportGuidBit1,
	MSEhasTransportTime2Bit,
	MSEhasTransportGuidBit2,
	MSEhasTransportGuidBit7,                   
	MSEhasTransportGuidBit0,
	MSEhasTransportGuidBit6,
	MSEhasTransportGuidBit5,
	MSEhasTransportGuidBit4,
	MSEhasTransportTime3Bit,
	MSEFlagsData,
	MSEExtraFlagsData,
	MSEhasJumpingBit,
	MSEGuidByte6,
	MSEGuidByte7,
	MSEGuidByte4, 
	MSEGuidByte1,
	MSEGuidByte5,
	MSEGuidByte0,
	MSEGuidByte2,
	MSEGuidByte3,
	MSETransportPositionZ,
	MSETransportGuidByte2,
	MSETransportTime3,
	MSETransportGuidByte0,
	MSETransportGuidByte5,
	MSETransportPositionY,
	MSETransportGuidByte1,
	MSETransportPositionX,
	MSETransportTime2,
	MSETransportGuidByte4,
	MSETransportPositionO,
	MSETransportSeat,
	MSETransportGuidByte7,
	MSETransportTime,
	MSETransportGuidByte6,
	MSETransportGuidByte3,
	MSESplineElevData,
	MSETimestampData,
	MSEJumpVelocity,
	MSEJumpCosAngle,
	MSEJumpSinAngle,
	MSEFallStartVelocity,
	MSEFallTime,
	MSEPositionO,
	MSESwiming,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStartForwardSequence[] = {
    MSEPositionY,
    MSEPositionZ,
    MSEPositionX,
    MSEhasGuidBit5,
    MSEhasGuidBit2,
    MSEhasGuidBit0,
    MSEhas149_Bit,
    MSEhasFlagsBit,
    MSEhasGuidBit7,
    MSEhasGuidBit3,
    MSEhasGuidBit1,
    MSEhasPositionOBit,
    MSEhasGuidBit6,
    MSEhas148_Bit,
    MSEhasUnknownBit3,
    MSEhasGuidBit4,
    MSEhasTransportDataBit,
    MSEhasLivingTimeBit,
    MSEhasUnknownBit2,
    MSEhasExtraFlagsBit,
    MSEhasInterPolatedTurningBit,
    MSEFlagsData,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit2,                   
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit1,
    MSEhasTransportTime3Bit,
    MSEhasTransportTime2Bit,
    MSEhasJumpingBit,
    MSEExtraFlagsData,
    MSEGuidByte2,
    MSEGuidByte4,
    MSEGuidByte6, 
    MSEGuidByte1,
    MSEGuidByte7,
    MSEGuidByte3,
    MSEGuidByte5,
    MSEGuidByte0,
    MSEFallStartVelocity,
    MSEJumpVelocity,
    MSEJumpSinAngle,
    MSEJumpCosAngle,
    MSEFallTime,
    MSETransportGuidByte3,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportGuidByte1,
    MSETransportGuidByte4,
    MSETransportGuidByte7,
    MSETransportPositionO,
    MSETransportGuidByte2,
    MSETransportPositionX,
    MSETransportGuidByte5,
    MSETransportTime3,
    MSETransportTime,
    MSETransportGuidByte6,
    MSETransportGuidByte0,
    MSETransportSeat,
    MSETransportTime2,
    MSEPositionO,
    MSETimestampData,
    MSESwiming,
    MSESplineElevData,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStartStrafeLeftSequence[] = {
    MSEPositionZ,
    MSEPositionX,
	MSEPositionY,
    MSEhasUnknownBit0,
    MSEhasGuidBit5,
    MSEhasUnknownBit1,
    MSEhasGuidBit6,
    MSEhasLivingTimeBit,
    MSEhasGuidBit1,
    MSEhas149_Bit,
    MSEhasGuidBit4,
    MSEhasGuidBit0,
    MSEhasGuidBit2,
    MSEhasInterPolatedTurningBit,
    MSEhasPositionOBit,
    MSEhasGuidBit3,
    MSEhasExtraFlagsBit,
    MSEhasGuidBit7,
    MSEhas148_Bit,
    MSEhasTransportDataBit,
    MSEhasFlagsBit,
    MSEhasJumpingBit,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit7,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit1,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit0,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEGuidByte2,
    MSEGuidByte6,
    MSEGuidByte3, 
    MSEGuidByte1,
    MSEGuidByte0,
    MSEGuidByte7,
    MSEGuidByte4,
    MSEGuidByte5,
    MSEJumpCosAngle,
    MSEJumpVelocity,
    MSEJumpSinAngle,
    MSEFallTime,
    MSEFallStartVelocity,
    MSETransportSeat,
    MSETransportGuidByte2,
    MSETransportTime2,
    MSETransportGuidByte3,
    MSETransportPositionZ,
    MSETransportTime3,
    MSETransportGuidByte0,
    MSETransportGuidByte7,
    MSETransportPositionY,
    MSETransportGuidByte5,
    MSETransportGuidByte1,
    MSETransportPositionO,
    MSETransportTime,
    MSETransportGuidByte6,
    MSETransportGuidByte4,
    MSETransportPositionX,
    MSETimestampData,
    MSEPositionO,
    MSESwiming,
    MSESplineElevData,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStartStrafeRightSequence[] = {
    MSEPositionY,
    MSEPositionX,
	MSEPositionZ,
    MSEhasUnknownBit0,
    MSEhasGuidBit1,
    MSEhasPositionOBit,
    MSEhasGuidBit4,
    MSEhas148_Bit,
    MSEhas149_Bit,
    MSEhasGuidBit5,
    MSEhasInterPolatedTurningBit,
    MSEhasUnknownBit3,
    MSEhasLivingTimeBit,
    MSEhasFlagsBit,
    MSEhasGuidBit2,
    MSEhasGuidBit7,
    MSEhasGuidBit6,
    MSEhasGuidBit3,
    MSEhasExtraFlagsBit,
    MSEhasTransportDataBit,
    MSEhasGuidBit0,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit0,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit1,
    MSEhasTransportGuidBit4,
    MSEhasTransportTime3Bit,
    MSEExtraFlagsData,
    MSEFlagsData,
    MSEhasJumpingBit,
    MSEGuidByte7,
    MSEGuidByte5,
    MSEGuidByte3, 
    MSEGuidByte1,
    MSEGuidByte2,
    MSEGuidByte4,
    MSEGuidByte6,
    MSEGuidByte0,
    MSETransportGuidByte5,
    MSETransportGuidByte1,
    MSETransportGuidByte6,
    MSETransportPositionY,
    MSETransportPositionO,
    MSETransportGuidByte0,
    MSETransportGuidByte2,
    MSETransportSeat,
    MSETransportPositionX,
    MSETransportTime3,
    MSETransportTime,
    MSETransportGuidByte4,
    MSETransportGuidByte7,
    MSETransportTime2,
    MSETransportPositionZ,
    MSETransportGuidByte3,
    MSESwiming,
    MSEPositionO,
    MSEJumpSinAngle,
    MSEJumpCosAngle,
    MSEJumpVelocity,
    MSEFallTime,
    MSEFallStartVelocity,
    MSETimestampData,
    MSESplineElevData,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStartTurnLeftSequence[] = {
    MSEPositionY,
    MSEPositionX,
    MSEPositionZ,
    MSEhas149_Bit,
    MSEhasGuidBit1,
    MSEhasPositionOBit,
    MSEhas148_Bit,
    MSEhasFlagsBit,
    MSEhasGuidBit4,
    MSEhasGuidBit2,
    MSEhasExtraFlagsBit,
    MSEhasGuidBit5,
    MSEhasGuidBit7,
    MSEhasTransportDataBit,
    MSEhasGuidBit6,
    MSEhasUnknownBit2,
    MSEhasGuidBit0,
    MSEhasGuidBit3,
    MSEhasUnknownBit3,
    MSEhasLivingTimeBit,
    MSEhasInterPolatedTurningBit,
    MSEExtraFlagsData,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit1,
    MSEhasTransportGuidBit0,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit2,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit6,
    MSEhasJumpingBit,
    MSEFlagsData,
    MSEGuidByte0,
    MSEGuidByte4,
    MSEGuidByte7, 
    MSEGuidByte5,
    MSEGuidByte6,
    MSEGuidByte3,
    MSEGuidByte2,
    MSEGuidByte1,
    MSEJumpCosAngle,
    MSEJumpSinAngle,
    MSEJumpVelocity,
    MSEFallStartVelocity,
    MSEFallTime,
    MSETransportGuidByte0,
    MSETransportPositionX,
    MSETransportTime,
    MSETransportSeat,
    MSETransportPositionZ,
    MSETransportGuidByte4,
    MSETransportPositionO,
    MSETransportGuidByte2,
    MSETransportGuidByte6,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportPositionY,
    MSETransportTime3,
    MSETransportTime2,
    MSETransportGuidByte5,
    MSETransportGuidByte7,
    MSETimestampData, 
    MSESwiming,
    MSEPositionO,
    MSESplineElevData,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStartTurnRightSequence[] = {
    MSEPositionX,
    MSEPositionZ,
	MSEPositionY,
    MSEhasGuidBit3,
    MSEhasGuidBit5,
    MSEhasFlagsBit,
    MSEhas148_Bit,
    MSEhasGuidBit0,
    MSEhasPositionOBit,
    MSEhasTransportDataBit,
    MSEhasGuidBit7,
    MSEhas149_Bit,
    MSEhasExtraFlagsBit,
    MSEhasGuidBit1,
    MSEhasLivingTimeBit,
    MSEhasGuidBit6,
    MSEhasGuidBit2,
    MSEhasGuidBit4,
    MSEhasUnknownBit2,
    MSEhasUnknownBit3,
    MSEhasInterPolatedTurningBit,
    MSEhasTransportGuidBit1,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit7,
    MSEhasTransportTime3Bit,
    MSEExtraFlagsData,
    MSEFlagsData,
    MSEhasJumpingBit,
    MSEGuidByte5,
    MSEGuidByte0,
    MSEGuidByte7, 
    MSEGuidByte3,
    MSEGuidByte2,
    MSEGuidByte1,
    MSEGuidByte4,
    MSEGuidByte6,
    MSETransportPositionY,
    MSETransportGuidByte0,
    MSETransportGuidByte4,
    MSETransportGuidByte1,
    MSETransportGuidByte6,
    MSETransportGuidByte2,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportGuidByte5,
    MSETransportTime3,
    MSETransportPositionZ,
    MSETransportPositionX,
    MSETransportTime,
    MSETransportGuidByte7,
    MSETransportGuidByte3,
    MSETransportTime2,
    MSEJumpVelocity,
    MSEJumpCosAngle,
    MSEJumpSinAngle,
    MSEFallTime,
    MSEFallStartVelocity,
    MSESwiming,
    MSEPositionO,
    MSESplineElevData,
    MSETimestampData,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStopSequence[] = {
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEhasGuidBit3,
    MSEhasGuidBit6,
    MSEhasUnknownBit3,
    MSEhas148_Bit,
    MSEhasPositionOBit,
    MSEhasGuidBit7,
    MSEhasFlagsBit,
    MSEhasGuidBit5,
    MSEhasInterPolatedTurningBit,
    MSEhasExtraFlagsBit,
    MSEhasTransportDataBit,
    MSEhasLivingTimeBit,
    MSEhasGuidBit4,
    MSEhasGuidBit1,
    MSEhas149_Bit,
    MSEhasGuidBit2,
    MSEhasGuidBit0,
    MSEhasUnknownBit1,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit1,
    MSEhasTransportGuidBit5,
    MSEhasTransportTime2Bit,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit2,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEhasJumpingBit,
    MSEGuidByte6,
    MSEGuidByte3,
    MSEGuidByte0, 
    MSEGuidByte4,
    MSEGuidByte2,
    MSEGuidByte1,
    MSEGuidByte5,
    MSEGuidByte7,
    MSETransportGuidByte4,
    MSETransportGuidByte7,
    MSETransportTime,
    MSETransportSeat,
    MSETransportPositionZ,
    MSETransportTime3,
    MSETransportGuidByte2,
    MSETransportGuidByte0,
    MSETransportPositionY,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportTime2,
    MSETransportPositionX,
    MSETransportPositionO,
    MSETransportGuidByte5,
    MSETransportGuidByte6,
    MSETimestampData,
    MSEPositionO,
    MSESwiming,
    MSESplineElevData,
    MSEJumpSinAngle,
    MSEJumpCosAngle,
    MSEJumpVelocity,
    MSEFallStartVelocity,
    MSEFallTime,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStopStrafeSequence[] = {
    MSEPositionY,
    MSEPositionZ,
	MSEPositionX,
    MSEhasUnknownBit0,
    MSEhasLivingTimeBit,
    MSEhasGuidBit2,
    MSEhasInterPolatedTurningBit,
    MSEhasGuidBit7,
    MSEhasUnknownBit1,
    MSEhasGuidBit3,
    MSEhasPositionOBit,
    MSEhasExtraFlagsBit,
    MSEhasTransportDataBit,
    MSEhasFlagsBit,
    MSEhas148_Bit,
    MSEhasGuidBit0,
    MSEhas149_Bit,
    MSEhasGuidBit6,
    MSEhasGuidBit5,
    MSEhasGuidBit1,
    MSEhasGuidBit4,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit5,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit1,
    MSEhasTransportGuidBit3,
    MSEhasTransportTime3Bit,
    MSEFlagsData,
    MSEhasJumpingBit,
    MSEExtraFlagsData,
    MSEGuidByte2,
    MSEGuidByte7,
    MSEGuidByte3, 
    MSEGuidByte4,
    MSEGuidByte5,
    MSEGuidByte6,
    MSEGuidByte1,
    MSEGuidByte0,
    MSETransportSeat,
    MSETransportGuidByte6,
    MSETransportPositionZ,
    MSETransportTime3,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte2,
    MSETransportGuidByte4,
    MSETransportGuidByte5,
    MSETransportTime,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportGuidByte0,
    MSETransportPositionY,
    MSETransportTime2,
    MSETransportGuidByte7,
    MSEJumpSinAngle,
    MSEJumpVelocity,
    MSEJumpCosAngle,
    MSEFallStartVelocity,
    MSEFallTime,
    MSESplineElevData,
    MSEPositionO,
    MSESwiming,
    MSETimestampData,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementStopTurnSequence[] = {
    MSEPositionX,
    MSEPositionZ,
	MSEPositionY,
    MSEhasGuidBit5,
    MSEhasGuidBit4,
    MSEhasInterPolatedTurningBit,
    MSEhas149_Bit,
    MSEhasGuidBit1,
    MSEhasGuidBit0,
    MSEhas148_Bit,
    MSEhasFlagsBit,
    MSEhasGuidBit2,
    MSEhasGuidBit6,
    MSEhasUnknownBit2,
    MSEhasTransportDataBit,
    MSEhasGuidBit3,
    MSEhasUnknownBit3,
    MSEhasLivingTimeBit,
    MSEhasExtraFlagsBit,
    MSEhasPositionOBit,
    MSEhasGuidBit7,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit7,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit4,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit1,
    MSEhasJumpingBit,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEGuidByte3,
    MSEGuidByte2,
    MSEGuidByte6, 
    MSEGuidByte4,
    MSEGuidByte0,
    MSEGuidByte7,
    MSEGuidByte1,
    MSEGuidByte5,
    MSESplineElevData,
    MSETransportPositionX,
    MSETransportGuidByte5,
    MSETransportSeat,
    MSETransportGuidByte2,
    MSETransportGuidByte3,
    MSETransportPositionO,
    MSETransportTime2,
    MSETransportTime3,
    MSETransportGuidByte7,
    MSETransportGuidByte1,
    MSETransportGuidByte0,
    MSETransportGuidByte4,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportGuidByte6,
    MSEFallTime,
    MSEJumpVelocity,
    MSEJumpSinAngle,
    MSEJumpCosAngle,
    MSEFallStartVelocity,
    MSETimestampData, 
    MSESwiming,
    MSEPositionO,
	MSE_END,
};
//4.2.2
MovementStatusElements MovementStartAscendSequence[] = {
	MSE_END,
};
//4.2.2
MovementStatusElements MovementStartDescendSequence[] = {
	MSE_END,
};
//4.2.2
MovementStatusElements MovementStartSwimSequence[] = {
	MSE_END,
};
//4.3.4
MovementStatusElements MovementUpdateMouseSequence[] = {
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEhasGuidBit6,
    MSEhasTransportDataBit,
    MSEhasGuidBit4,
    MSEhas148_Bit,
    MSEhasGuidBit0,
    MSEhasPositionOBit,
    MSEhasLivingTimeBit,
    MSEhasUnknownBit1,
    MSEhasExtraFlagsBit,
    MSEhasGuidBit5,
    MSEhasGuidBit7,
    MSEhasGuidBit2,
    MSEhasInterPolatedTurningBit,
    MSEhasUnknownBit2,
    MSEhasFlagsBit,
    MSEhasGuidBit3,
    MSEhas149_Bit,
    MSEhasGuidBit1,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit6,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit1,
    MSEhasJumpingBit,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEGuidByte6,
    MSEGuidByte7,
    MSEGuidByte2, 
    MSEGuidByte0,
    MSEGuidByte4,
    MSEGuidByte1,
    MSEGuidByte5,
    MSEGuidByte3,
    MSETransportGuidByte0,
    MSETransportPositionX,
    MSETransportGuidByte1,
    MSETransportTime2,
    MSETransportGuidByte4,
    MSETransportPositionZ,
    MSETransportPositionO,
    MSETransportGuidByte2,
    MSETransportTime3,
    MSETransportGuidByte3,
    MSETransportSeat,
    MSETransportPositionY,
    MSETransportGuidByte5,
    MSETransportGuidByte6,
    MSETransportTime,
    MSETransportGuidByte7,
    MSEJumpVelocity,
    MSEJumpCosAngle,
    MSEJumpSinAngle,
    MSEFallTime,
    MSEFallStartVelocity,
    MSESplineElevData,
    MSEPositionO,
    MSETimestampData,
    MSESwiming,
	MSE_END,
};
//4.2.4
MovementStatusElements MovementStopAscendSequence[] = {
   MSE_END,
};
//4.3.4
MovementStatusElements MovementSetWalkModeSequence[] = {
    MSEPositionY,
    MSEPositionX,
    MSEPositionZ,
    MSEhasGuidBit6,
    MSEhas148_Bit,
    MSEhasLivingTimeBit,
    MSEhasGuidBit0,
    MSEhasGuidBit1,
    MSEhasFlagsBit,
    MSEhasUnknownBit0,
    MSEhasGuidBit7,
    MSEhasUnknownBit1,
    MSEhasGuidBit4,
    MSEhasPositionOBit,
    MSEhasTransportDataBit,
    MSEhasGuidBit2,
    MSEhasGuidBit5,
    MSEhasGuidBit3,
    MSEhas149_Bit,
    MSEhasExtraFlagsBit,
    MSEhasInterPolatedTurningBit,
    MSEhasTransportGuidBit2,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit1,
    MSEhasTransportGuidBit3,                   
    MSEhasTransportTime2Bit,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit7,
    MSEhasJumpingBit,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEGuidByte5,
    MSEGuidByte6,
    MSEGuidByte4, 
    MSEGuidByte7,
    MSEGuidByte3,
    MSEGuidByte0,
    MSEGuidByte2,
    MSEGuidByte1,
    MSETransportGuidByte2,
    MSETransportGuidByte5,
    MSETransportSeat,
    MSETransportPositionZ,
    MSETransportGuidByte3,
    MSETransportGuidByte6,
    MSETransportGuidByte0,
    MSETransportTime,
    MSETransportGuidByte4,
    MSETransportTime2,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportTime3,
    MSETransportGuidByte7,
    MSETransportPositionY,
    MSETransportGuidByte1,
    MSEJumpSinAngle,
    MSEJumpVelocity,
    MSEJumpCosAngle,
    MSEFallStartVelocity,
    MSEFallTime,
    MSESplineElevData,
    MSESwiming,
    MSETimestampData,
    MSEPositionO,
	MSE_END,
};
//4.3.4
MovementStatusElements MovementSetRunModeSequence[] = {
    MSEPositionY,
    MSEPositionX,
    MSEPositionZ,
    MSEhasLivingTimeBit,
    MSEhasExtraFlagsBit,
    MSEhasGuidBit1,
    MSEhas148_Bit,
    MSEhasFlagsBit,
    MSEhasGuidBit7,
    MSEhasTransportDataBit,
    MSEhas149_Bit,
    MSEhasGuidBit0,
    MSEhasGuidBit3,
    MSEhasUnknownBit0,
    MSEhasGuidBit5,
    MSEhasUnknownBit1 ,
    MSEhasGuidBit6,
    MSEhasGuidBit4,
    MSEhasInterPolatedTurningBit,
    MSEhasPositionOBit,
    MSEhasGuidBit2,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit4,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit3,                   
    MSEhasTransportGuidBit1,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit2,
    MSEhasJumpingBit,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEGuidByte3,
    MSEGuidByte6,
    MSEGuidByte0, 
    MSEGuidByte7,
    MSEGuidByte4,
    MSEGuidByte1,
    MSEGuidByte5,
    MSEGuidByte2,
    MSESwiming,
    MSETransportTime2,
    MSETransportGuidByte3,
    MSETransportPositionX,
    MSETransportSeat,
    MSETransportGuidByte5,
    MSETransportGuidByte1,
    MSETransportPositionZ,
    MSETransportGuidByte2,
    MSETransportGuidByte7,
    MSETransportPositionO,
    MSETransportGuidByte4,
    MSETransportTime,
    MSETransportTime3,
    MSETransportGuidByte0,
    MSETransportPositionY,
    MSETransportGuidByte6,
    MSEJumpCosAngle,
    MSEJumpVelocity,
    MSEJumpSinAngle,
    MSEFallTime,
    MSEFallStartVelocity,
    MSESplineElevData,
    MSETimestampData,
    MSEPositionO,
	MSE_END,
};

MovementStatusElements MovementRequestStatusSequence[] = {
    MSEPositionZ,
    MSEPositionX,
    MSEPositionY,
    MSEhasUnknownBit0,
    MSEhasLivingTimeBit,
    MSEhasInterPolatedTurningBit,
    MSEhasExtraFlagsBit,
    MSEhasTransportDataBit,
    MSEhasGuidBit7,
    MSEhasGuidBit1,
    MSEhasGuidBit0,
    MSEhasGuidBit4,
    MSEhasGuidBit2,
    MSEhasPositionOBit,
    MSEhasGuidBit5,
    MSEhasGuidBit3,
    MSEhasUnknownBit1,
    MSEhas148_Bit,
    MSEhas149_Bit,
    MSEhasGuidBit6,
    MSEhasFlagsBit,
    MSEhasTransportTime3Bit,
    MSEhasTransportGuidBit4,
    MSEhasTransportGuidBit2,
    MSEhasTransportTime2Bit,
    MSEhasTransportGuidBit5,
    MSEhasTransportGuidBit7,
    MSEhasTransportGuidBit6,
    MSEhasTransportGuidBit0,
    MSEhasTransportGuidBit3,
    MSEhasTransportGuidBit1,
    MSEhasJumpingBit,
    MSEFlagsData,
    MSEExtraFlagsData,
    MSEGuidByte3,
    MSEGuidByte6,
    MSEGuidByte1, 
    MSEGuidByte7,
    MSEGuidByte2,
    MSEGuidByte5,
    MSEGuidByte0,
    MSEGuidByte4,
    MSETransportPositionZ,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportGuidByte4,
    MSETransportPositionY,
    MSETransportTime,
    MSETransportPositionX,
    MSETransportGuidByte5,
    MSETransportGuidByte1,
    MSETransportGuidByte3,
    MSETransportGuidByte7,
    MSETransportTime3,
    MSETransportTime2,
    MSETransportGuidByte2,
    MSETransportGuidByte0,
    MSETransportGuidByte6,
    MSEPositionO,
    MSEFallStartVelocity,
    MSEFallTime,
    MSEJumpVelocity,
    MSEJumpCosAngle,
    MSEJumpSinAngle,
    MSESwiming,
    MSESplineElevData,
    MSETimestampData,
	MSE_END,
};

MovementStatusElements* GetMovementStatusElementsSequence(Opcodes opcode)
{
    switch(opcode)
    {
	case MSG_MOVE_UPDATE_MOUSE://done
        return MovementUpdateMouseSequence;
    //case SMSG_PLAYER_MOVE://done
    //    return PlayerMoveSequence;
    //case MSG_MOVE_FALL_LAND://done
    //    return MovementFallLandSequence;
    case MSG_MOVE_HEARTBEAT://done
        return MovementHeartBeatSequence;
    case MSG_MOVE_JUMP://done
        return MovementJumpSequence;
    //case MSG_MOVE_SET_FACING://done
    //    return MovementSetFacingSequence;
    //case MSG_MOVE_SET_PITCH://done*/
    //    return MovementSetPitchSequence;
    case MSG_MOVE_START_BACKWARD://done
        return MovementStartBackwardSequence;
    case MSG_MOVE_START_FORWARD://done
        return MovementStartForwardSequence;
    case MSG_MOVE_START_STRAFE_LEFT://done
        return MovementStartStrafeLeftSequence;
    case MSG_MOVE_START_STRAFE_RIGHT://done
        return MovementStartStrafeRightSequence;
    case MSG_MOVE_START_TURN_LEFT://done
        return MovementStartTurnLeftSequence;
    case MSG_MOVE_START_TURN_RIGHT://done
        return MovementStartTurnRightSequence;
    case MSG_MOVE_STOP://done
        return MovementStopSequence;
    case MSG_MOVE_STOP_STRAFE://done
        return MovementStopStrafeSequence;
    case MSG_MOVE_STOP_TURN://done
        return MovementStopTurnSequence;
    /*case MSG_MOVE_START_ASCEND://done
        return MovementStartAscendSequence;
    case MSG_MOVE_START_DESCEND://done
        return MovementStartDescendSequence;
    case MSG_MOVE_START_SWIM://done
        return MovementStartSwimSequence;
    case MSG_MOVE_STOP_ASCEND://done
        return MovementStopAscendSequence;*/
	case MSG_MOVE_SET_RUN_MODE:
		return MovementSetRunModeSequence;
	case MSG_MOVE_SET_WALK_MODE:
		return MovementSetWalkModeSequence;
	case MSG_MOVE_REQUEST_STATUS:
		return MovementRequestStatusSequence;
	default:
        break;
    }
    return NULL;
}

#endif
