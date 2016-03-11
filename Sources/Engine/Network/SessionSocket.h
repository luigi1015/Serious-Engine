/* Copyright (c) 2002-2012 Croteam Ltd. All rights reserved. */

#ifndef SE_INCL_SESSIONSOCKET_H
#define SE_INCL_SESSIONSOCKET_H
#ifdef PRAGMA_ONCE
  #pragma once
#endif
#include <Engine/Base/Timer.h>

// parameters for a client
class CSessionSocketParams {
public:
  INDEX ssp_iBufferActions;
  INDEX ssp_iMaxBPS;
  INDEX ssp_iMinBPS;

public:
  CSessionSocketParams(void);
  void Clear(void);

  // check if up to date with current params
  BOOL IsUpToDate(void);
  // update
  void Update(void);

  // message operations
  friend CNetworkMessage &operator<<(CNetworkMessage &nm, CSessionSocketParams &ssp);
  friend CNetworkMessage &operator>>(CNetworkMessage &nm, CSessionSocketParams &ssp);
};

// connection data for each session connected to a server
class CSessionSocket {
public:
  BOOL sso_bActive;
  BOOL sso_bSendStream;
  CTimerValue sso_tvMessageReceived;
  TIME sso_tmLastSyncReceived;
  INDEX sso_iDisconnectedState;
  INDEX sso_iLastSentSequence;
  INDEX sso_ctBadSyncs;   // counter of bad sync in row
  CTimerValue sso_tvLastMessageSent;    // for sending keep-alive messages
  CTimerValue sso_tvLastPingSent;       // for sending ping
  CNetworkStream sso_nsBuffer;  // stream of blocks buffered for sending
  CSessionSocketParams sso_sspParams; // parameters that the client wants
  INDEX sso_ctLocalPlayers;     // number of players that this client will connect
  BOOL sso_bVIP;          // set if the client was successfully authorized as a VIP
public:
  CSessionSocket(void);
  ~CSessionSocket(void);
  void Clear(void);
  void Activate(void);
  void Deactivate(void);
  BOOL IsActive(void);
};



#endif  /* include-once check. */

