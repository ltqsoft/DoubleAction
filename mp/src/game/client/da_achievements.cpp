//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: Achievements for DA
//		these achievements are triggered when the server fires relevant events
//
//=============================================================================



//#ifdef GAME_DLL


#include "cbase.h"

#include "baseachievement.h"
#include "achievementmgr.h"
#include "sdk_player_shared.h"
#include "c_sdk_player.h"

CAchievementMgr* g_pAchivementManager = new CAchievementMgr();


// GET A DIVEPUNCH KILL
class CAchievementDAdivepunch1 : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_LISTEN_PLAYER_KILL_ENEMY_EVENTS | ACH_SAVE_GLOBAL);
		SetGoal(1);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("DIVEPUNCHKILL");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "DIVEPUNCHKILL") && C_BasePlayer::GetLocalPlayer())
		{
			int iUserID = event->GetInt("userid"); // the userID passed from the event data

			// if the atackers userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};

#define DIVEPUNCHKILL 4 // the stat ID and name from steamworks - not the achievement ID
DECLARE_ACHIEVEMENT(CAchievementDAdivepunch1, DIVEPUNCHKILL, "DIVEPUNCHKILL", 1)



// GET 250 DIVEPUNCH KILLS
class CAchievementDAdivepunch250 : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_LISTEN_PLAYER_KILL_ENEMY_EVENTS | ACH_SAVE_GLOBAL);
		SetGoal(250);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("DIVEPUNCHKILL_250");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "DIVEPUNCHKILL_250") && C_BasePlayer::GetLocalPlayer())
		{
			int iUserID = event->GetInt("userid"); // the userID passed from the event data

			// if the atackers userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define DIVEPUNCHKILL_250 7
DECLARE_ACHIEVEMENT(CAchievementDAdivepunch250, DIVEPUNCHKILL_250, "DIVEPUNCHKILL_250", 1)


// GET like a bajillion DIVEPUNCH KILLS
class CAchievementDAdivepunchBajillion : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_LISTEN_PLAYER_KILL_ENEMY_EVENTS | ACH_SAVE_GLOBAL);
		SetGoal(651438);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("DIVEPUNCHKILL_BAJILLION");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "DIVEPUNCHKILL_BAJILLION") && C_BasePlayer::GetLocalPlayer())
		{
			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			//DevMsg("DIVEPUNCHKILL_BAJILLION activate");
			// if the atackers userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define DIVEPUNCHKILL_BAJILLION 8
DECLARE_ACHIEVEMENT(CAchievementDAdivepunchBajillion, DIVEPUNCHKILL_BAJILLION, "DIVEPUNCHKILL_BAJILLION", 1)






// Dive away from an explosion for reduced damage
class CAchievementDAdiveaweayfromexplosion : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags( ACH_SAVE_GLOBAL);
		SetGoal(1);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("DIVEAWAYFROMEXPLOSION");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "DIVEAWAYFROMEXPLOSION") && C_BasePlayer::GetLocalPlayer())
		{
			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			// if the userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define DIVEAWAYFROMEXPLOSION 10
DECLARE_ACHIEVEMENT(CAchievementDAdiveaweayfromexplosion, DIVEAWAYFROMEXPLOSION, "DIVEAWAYFROMEXPLOSION", 1)







// Dive away from an explosion for reduced damage 250 times
class CAchievementDAdiveaweayfromexplosion250 : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL);
		SetGoal(250);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("DIVEAWAYFROMEXPLOSION_250");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "DIVEAWAYFROMEXPLOSION_250") && C_BasePlayer::GetLocalPlayer())
		{
			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			// if the userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define DIVEAWAYFROMEXPLOSION_250 5
DECLARE_ACHIEVEMENT(CAchievementDAdiveaweayfromexplosion250, DIVEAWAYFROMEXPLOSION_250, "DIVEAWAYFROMEXPLOSION_250", 1)






// get a headshot at point blank range
class CAchievementDAdodgethis : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL);
		SetGoal(1);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("DODGETHIS");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "DODGETHIS") && C_BasePlayer::GetLocalPlayer())
		{
			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			// if the userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define DODGETHIS 11
DECLARE_ACHIEVEMENT(CAchievementDAdodgethis, DODGETHIS, "DODGETHIS", 1)







// Get a 250 kill streak
class CAchievementDApenguin : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL);
		SetGoal(1);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("PENGUIN");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "PENGUIN") && C_BasePlayer::GetLocalPlayer())
		{
			
			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			// if the userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define PENGUIN 12
DECLARE_ACHIEVEMENT(CAchievementDApenguin, PENGUIN, "PENGUIN", 1)







// Get 1 million total style points
class CAchievementDAdiscostu : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL);
		SetGoal(1000000);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("da_intermissionstarted");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "da_intermissionstarted") && C_BasePlayer::GetLocalPlayer())
		{
		//	DevMsg("INCREMENTING DISCOSTU");
			IncrementCount(C_SDKPlayer::GetLocalSDKPlayer()->GetStylePoints()); // providing a parameter because we want to increment by more than 1
		}
	}
};
#define DISCOSTU 12
DECLARE_ACHIEVEMENT(CAchievementDAdiscostu, DISCOSTU, "DISCOSTU", 1)







// get a brawl kill while superfalling - UNTESTED
class CAchievementDAskypunch : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL);
		SetGoal(1);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("SKYPUNCH");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "SKYPUNCH") && C_BasePlayer::GetLocalPlayer())
		{

			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			// if the userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define SKYPUNCH 14
DECLARE_ACHIEVEMENT(CAchievementDAskypunch, SKYPUNCH, "SKYPUNCH", 1)







// get 3 kills in a single slowmo
class CAchievementDAslowpro : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL);
		SetGoal(1);
		m_bStoreProgressInSteam = true;
		//steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("SLOWPRO");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "SLOWPRO") && C_BasePlayer::GetLocalPlayer())
		{

			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			// if the userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define SLOWPRO 15
DECLARE_ACHIEVEMENT(CAchievementDAslowpro, SLOWPRO, "SLOWPRO", 1)







// cap a briefcase without killing anyone
class CAchievementDAspecialdelivery : public CBaseAchievement
{
protected:
	virtual void Init()
	{
		SetFlags(ACH_SAVE_GLOBAL);
		SetGoal(1);
		m_bStoreProgressInSteam = true;
		steamapicontext->SteamUserStats()->ResetAllStats(true);
	}

	// register our event listeners
	virtual void ListenForEvents()
	{
		ListenForGameEvent("SPECIALDELIVERY");
	}

	// define what happens when we catch an event
	void FireGameEvent_Internal(IGameEvent *event)
	{
		// compare event names and check that we have a local player
		if (0 == Q_strcmp(event->GetName(), "SPECIALDELIVERY") && C_BasePlayer::GetLocalPlayer())
		{

			int iUserID = event->GetInt("userid"); // the userID passed from the event data
			// if the userID from the event matches the local player
			if (iUserID == C_BasePlayer::GetLocalPlayer()->GetUserID())
			{
				IncrementCount(); // WE ALL GOOD!
			}
		}
	}
};
#define SPECIALDELIVERY 16
DECLARE_ACHIEVEMENT(CAchievementDAspecialdelivery, SPECIALDELIVERY, "SPECIALDELIVERY", 1)





//#endif // GAME_DLL