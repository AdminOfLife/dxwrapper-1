#pragma once

#define VISIT_PROCS_XLIVE(visit) \
	visit(_XWSAStartup, jmpaddr) \
	visit(_XGetOverlappedExtendedError, jmpaddr) \
	visit(_XGetOverlappedResult, jmpaddr) \
	visit(_XSocketBind, jmpaddr) \
	visit(_XSocketConnect, jmpaddr) \
	visit(_XSocketListen, jmpaddr) \
	visit(_XSocketAccept, jmpaddr) \
	visit(_XSocketSelect, jmpaddr) \
	visit(_XSocketRecv, jmpaddr) \
	visit(_XWSACleanup, jmpaddr) \
	visit(_XSocketRecvFrom, jmpaddr) \
	visit(_XSocketSend, jmpaddr) \
	visit(_XSocketSendTo, jmpaddr) \
	visit(_XSocketInet_Addr, jmpaddr) \
	visit(_XWSAGetLastError, jmpaddr) \
	visit(_XCreateSocket, jmpaddr) \
	visit(_XSocketNTOHS, jmpaddr) \
	visit(_XSocketNTOHL, jmpaddr) \
	visit(_XSockeClose, jmpaddr) \
	visit(_XCustomGetLastActionPress, jmpaddr) \
	visit(_XSocketShutdown, jmpaddr) \
	visit(_XLiveInitialize, jmpaddr) \
	visit(_XLiveInput, jmpaddr) \
	visit(_XLiveRender, jmpaddr) \
	visit(_XLiveUninitialize, jmpaddr) \
	visit(_XLiveOnCreateDevice, jmpaddr) \
	visit(_XLiveOnResetDevice, jmpaddr) \
	visit(_XHVCreateEngine, jmpaddr) \
	visit(_XLivePBufferAllocate, jmpaddr) \
	visit(_XLivePBufferFree, jmpaddr) \
	visit(_XLivePBufferGetByte, jmpaddr) \
	visit(_XLivePBufferSetByte, jmpaddr) \
	visit(_XLivePBufferGetDWORD, jmpaddr) \
	visit(_XLivePBufferSetDWORD, jmpaddr) \
	visit(_XLiveGetUpdateInformation, jmpaddr) \
	visit(_XLiveUpdateSystem, jmpaddr) \
	visit(_XLiveSetSponsorToken, jmpaddr) \
	visit(_XLivePreTranslateMessage, jmpaddr) \
	visit(_XLiveSetDebugLevel, jmpaddr) \
	visit(_XLiveProtectData, jmpaddr) \
	visit(_XLiveUnprotectData, jmpaddr) \
	visit(_XLiveCreateProtectedDataContext, jmpaddr) \
	visit(_XLiveQueryProtectedDataInformation, jmpaddr) \
	visit(_XLiveCloseProtectedDataContext, jmpaddr) \
	visit(_XNetStartup, jmpaddr) \
	visit(_XNetCleanup, jmpaddr) \
	visit(_XShowPlayerReviewUI, jmpaddr) \
	visit(_XShowGuideUI, jmpaddr) \
	visit(_XShowKeyboardUI, jmpaddr) \
	visit(_XCloseHandle, jmpaddr) \
	visit(_XShowGamerCardUI, jmpaddr) \
	visit(_XCancelOverlapped, jmpaddr) \
	visit(_XEnumerate, jmpaddr) \
	visit(_XShowSigninUI, jmpaddr) \
	visit(_XUserGetXUID, jmpaddr) \
	visit(_XUserGetSigninState, jmpaddr) \
	visit(_XUserGetName, jmpaddr) \
	visit(_XUserAreUsersFriends, jmpaddr) \
	visit(_XUserCheckPrivilege, jmpaddr) \
	visit(_XUserGetSigninInfo, jmpaddr) \
	visit(_XNotifyCreateListener, jmpaddr) \
	visit(_XUserReadGamerpictureByKey, jmpaddr) \
	visit(_XShowFriendsUI, jmpaddr) \
	visit(_XUserSetProperty, jmpaddr) \
	visit(_XUserSetContext, jmpaddr) \
	visit(_XUserWriteAchievements, jmpaddr) \
	visit(_XUserCreateAchievementEnumerator, jmpaddr) \
	visit(_XUserReadStats, jmpaddr) \
	visit(_XUserCreateStatsEnumeratorByRank, jmpaddr) \
	visit(_XUserCreateStatsEnumeratorByXuid, jmpaddr) \
	visit(_XUserSetContextEx, jmpaddr) \
	visit(_XUserSetPropertyEx, jmpaddr) \
	visit(_XLivePBufferGetByteArray, jmpaddr) \
	visit(_XLivePBufferSetByteArray, jmpaddr) \
	visit(_XLiveInitializeEx, jmpaddr) \
	visit(_XSessionCreate, jmpaddr) \
	visit(_XStringVerify, jmpaddr) \
	visit(_XStorageUploadFromMemory, jmpaddr) \
	visit(_XStorageEnumerate, jmpaddr) \
	visit(_XOnlineStartup, jmpaddr) \
	visit(_XOnlineCleanup, jmpaddr) \
	visit(_XFriendsCreateEnumerator, jmpaddr) \
	visit(_XUserMuteListQuery, jmpaddr) \
	visit(_XInviteGetAcceptedInfo, jmpaddr) \
	visit(_XInviteSend, jmpaddr) \
	visit(_XSessionWriteStats, jmpaddr) \
	visit(_XSessionStart, jmpaddr) \
	visit(_XSessionSearchEx, jmpaddr) \
	visit(_XSessionModify, jmpaddr) \
	visit(_XSessionMigrateHost, jmpaddr) \
	visit(_XOnlineGetNatType, jmpaddr) \
	visit(_XSessionLeaveLocal, jmpaddr) \
	visit(_XSessionJoinRemote, jmpaddr) \
	visit(_XSessionJoinLocal, jmpaddr) \
	visit(_XSessionGetDetails, jmpaddr) \
	visit(_XSessionFlushStats, jmpaddr) \
	visit(_XSessionDelete, jmpaddr) \
	visit(_XUserReadProfileSettings, jmpaddr) \
	visit(_XSessionEnd, jmpaddr) \
	visit(_XSessionArbitrationRegister, jmpaddr) \
	visit(_XTitleServerCreateEnumerator, jmpaddr) \
	visit(_XSessionLeaveRemote, jmpaddr) \
	visit(_XUserWriteProfileSettings, jmpaddr) \
	visit(_XUserReadProfileSettingsByXuid, jmpaddr) \
	visit(_XLiveCalculateSkill, jmpaddr) \
	visit(_XStorageBuildServerPath, jmpaddr) \
	visit(_XStorageDownloadToMemory, jmpaddr) \
	visit(_XLiveProtectedVerifyFile, jmpaddr) \
	visit(_XLiveContentCreateAccessHandle, jmpaddr) \
	visit(_XLiveContentUninstall, jmpaddr) \
	visit(_XLiveContentGetPath, jmpaddr) \
	visit(_XLiveContentCreateEnumerator, jmpaddr) \
	visit(_XLiveContentRetrieveOffersByDate, jmpaddr) \
	visit(_XShowMarketplaceUI, jmpaddr) \
	visit(_xlive_5367, jmpaddr) \
	visit(_xlive_5372, jmpaddr) \
	visit(_XNetCreateKey, jmpaddr) \
	visit(_XNetRegisterKey, jmpaddr) \
	visit(_XNetUnregisterKey, jmpaddr) \
	visit(_XNetXnAddrToInAddr, jmpaddr) \
	visit(_XNetServerToInAddr, jmpaddr) \
	visit(_XSocketIOCTLSocket, jmpaddr) \
	visit(_XNetInAddrToXnAddr, jmpaddr) \
	visit(_XNetUnregisterInAddr, jmpaddr) \
	visit(_XNetConnect, jmpaddr) \
	visit(_XNotifyGetNext, jmpaddr) \
	visit(_XNotifyPositionUI, jmpaddr) \
	visit(_XNetGetConnectStatus, jmpaddr) \
	visit(_XNetQosListen, jmpaddr) \
	visit(_XSocketSetSockOpt, jmpaddr) \
	visit(_XNetQosLookup, jmpaddr) \
	visit(_XNetQosServiceLookup, jmpaddr) \
	visit(_XNetQosRelease, jmpaddr) \
	visit(_XNetGetTitleXnAddr, jmpaddr) \
	visit(_XNetGetEthernetLinkStatus, jmpaddr) \
	visit(_XNetSetSystemLinkPort, jmpaddr) \
	visit(_XSocketGetSockName, jmpaddr)

#ifdef PROC_CLASS
PROC_CLASS(xlive, dll, VISIT_PROCS_XLIVE)
#endif
