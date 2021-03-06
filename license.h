/**
 * vnc2rdp: proxy for RDP client connect to VNC server
 *
 * Copyright 2014 Yiwei Li <leeyiw@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LICENSE_H_
#define _LICENSE_H_

/* bMsgType */
#define LICENSE_REQUEST					0x01
#define PLATFORM_CHALLENGE				0x02
#define NEW_LICENSE						0x03
#define UPGRADE_LICENSE					0x04
#define LICENSE_INFO					0x12
#define NEW_LICENSE_REQUEST				0x13
#define PLATFORM_CHALLENGE_RESPONSE		0x15
#define ERROR_ALERT						0xFF

/* flags */
#define LicenseProtocolVersionMask		0x0F
#define EXTENDED_ERROR_MSG_SUPPORTED	0x80
#define PREAMBLE_VERSION_2_0			0x2
#define PREAMBLE_VERSION_3_0			0x3

/* wBlobType */
#define BB_DATA_BLOB					0x0001
#define BB_RANDOM_BLOB					0x0002
#define BB_CERTIFICATE_BLOB 			0x0003
#define BB_ERROR_BLOB					0x0004
#define BB_ENCRYPTED_DATA_BLOB			0x0009
#define BB_KEY_EXCHG_ALG_BLOB			0x000D
#define BB_SCOPE_BLOB					0x000E
#define BB_CLIENT_USER_NAME_BLOB		0x000F
#define BB_CLIENT_MACHINE_NAME_BLOB		0x0010

/* dwErrorCode */
#define ERR_INVALID_SERVER_CERTIFICATE	0x00000001
#define ERR_NO_LICENSE					0x00000002
#define ERR_INVALID_SCOPE				0x00000004
#define ERR_NO_LICENSE_SERVER			0x00000006
#define STATUS_VALID_CLIENT				0x00000007
#define ERR_INVALID_CLIENT				0x00000008
#define ERR_INVALID_PRODUCTID			0x0000000B
#define ERR_INVALID_MESSAGE_LEN			0x0000000C
#define ERR_INVALID_MAC					0x00000003

/* dwStateTransition */
#define ST_TOTAL_ABORT					0x00000001
#define ST_NO_TRANSITION				0x00000002
#define ST_RESET_PHASE_TO_START			0x00000003
#define ST_RESEND_LAST_MESSAGE			0x00000004

#endif  // _LICENSE_H_
