#ifndef _DVBCA_MSG_H_
#define _DVBCA_MSG_H_

#define	DVBCA_PPC_DAY		10

typedef enum
{
	OSD_DISPLAY,
	OSD_HIDE,
}OSD_DISPLAY_TYPE;

typedef enum
{
	FINGER_HIDE,
	FINGER_DISPLAY,
}FINGER_DISPLAY_TYPE;

typedef enum {
	NO_ENTITLE = 1,
	ILLEGL_OPERATOR,
	BLOCK_AREO,
	EXPIRED,
	PASSWORD_ERROR,
	NETWORK_ID_ERROR,
	ADULT_LEVEL_ERROR,
	STR_PAIR_ERROR,
	EXPIRE_CARD_ERROR,
	WORK_TIME_ERROR,
	DECRYPT_ERROR,
}ECM_ERROR_TYPE;

typedef enum {
	OSD_STOP,
	OSD_RUN,
	OSD_PAUSE,
}OSD_RUN_STATUS;


typedef enum
{
	MSG_CARD_AUTHORIZE_FAILED,
	MSG_CARD_REMOVE,
	MSG_CARD_INSERT,
	MSG_CARD_SET_ECM_FILTER,
	MSG_CARD_SET_EMM_FILTER,
	MSG_CARD_RECV_ECM,
	MSG_CARD_CHECK_MSG_STATUS,
	MSG_CARD_NEW_MAIL,
	MSG_CARD_DISPLAYURGENT,
	MSG_CARD_HIDEURGENT,
	MSG_CARD_CHECKNEWMSG,
	MSG_CARD_EXIT,
}MSG_MSG_TYPE;

int DVBCA_MsgTaskInit(DVBCA_UINT8 ucThreadPriority);
void DVBCA_MsgTask(void);
void DVBCA_MsgShowOsdMessageEnd(void);
void DVBCA_MsgTaskUnInit(void);
#endif
