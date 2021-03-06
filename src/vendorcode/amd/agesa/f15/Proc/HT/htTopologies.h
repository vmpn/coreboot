/* $NoKeywords:$ */
/**
 * @file
 *
 * Provide selection of available topologies.
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  HyperTransport
 * @e \$Revision: 44324 $   @e \$Date: 2010-12-22 02:16:51 -0700 (Wed, 22 Dec 2010) $
 *
 */
/*
*****************************************************************************
*
* Copyright (C) 2012 Advanced Micro Devices, Inc.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*     * Neither the name of Advanced Micro Devices, Inc. nor the names of
*       its contributors may be used to endorse or promote products derived
*       from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
* ***************************************************************************
*
*/
#ifndef _HT_TOPOLOGIES_H_
#define _HT_TOPOLOGIES_H_

extern CONST UINT8 ROMDATA amdHtTopologySingleNode[];
extern CONST UINT8 ROMDATA amdHtTopologyDualNode[];
extern CONST UINT8 ROMDATA amdHtTopologyThreeLine[];
extern CONST UINT8 ROMDATA amdHtTopologyTriangle[];
extern CONST UINT8 ROMDATA amdHtTopologyFourLine[];
extern CONST UINT8 ROMDATA amdHtTopologyFourStar[];
extern CONST UINT8 ROMDATA amdHtTopologyFourDegenerate[];
extern CONST UINT8 ROMDATA amdHtTopologyFourSquare[];
extern CONST UINT8 ROMDATA amdHtTopologyFourKite[];
extern CONST UINT8 ROMDATA amdHtTopologyFourFully[];
extern CONST UINT8 ROMDATA amdHtTopologyFiveFully[];
extern CONST UINT8 ROMDATA amdHtTopologyFiveTwistedLadder[];
extern CONST UINT8 ROMDATA amdHtTopologySixFully[];
extern CONST UINT8 ROMDATA amdHtTopologySixDoubloonLower[];
extern CONST UINT8 ROMDATA amdHtTopologySixDoubloonUpper[];
extern CONST UINT8 ROMDATA amdHtTopologySixTwistedLadder[];
extern CONST UINT8 ROMDATA amdHtTopologySevenFully[];
extern CONST UINT8 ROMDATA amdHtTopologySevenTwistedLadder[];
extern CONST UINT8 ROMDATA amdHtTopologyEightFully[];
extern CONST UINT8 ROMDATA amdHtTopologyEightDoubloon[];
extern CONST UINT8 ROMDATA amdHtTopologyEightTwistedLadder[];
extern CONST UINT8 ROMDATA amdHtTopologyEightStraightLadder[];
extern CONST UINT8 ROMDATA amdHtTopologySixTwinTriangles[];
extern CONST UINT8 ROMDATA amdHtTopologyEightTwinFullyFourWays[];

#endif // _HT_TOPOLOGIES_H_
