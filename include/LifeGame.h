#ifndef INCLUDE_LIFEGAME_H_
#define INCLUDE_LIFEGAME_H_

#include "infra/Role.h"
#include "trans/Service.h" /*���������ͷ�ļ���Ϊ�˶Կͻ�ֻ��©LifeGame.h���ͷ�ļ�*/
#include "trans/CellTrans.h"

DEFINE_ROLE(LifeGame){
	static LifeGame& getInstance();
	USE_ROLE(CellTrans);
	USE_ROLE(Service);
};

#endif
