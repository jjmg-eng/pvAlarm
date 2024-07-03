//###############################################################
//# mask1_slots.h for ProcessViewServer created: Mi. Okt 20 08:43:44 2010
//# please fill out these slots
//# here you find all possible events
//# Yours: Lehrig Software Engineering
//###############################################################

// todo: uncomment me if you want to use this data aquisiton
// also uncomment this classes in main.cpp and pvapp.h
// also remember to uncomment rllib in the project file
//extern rlModbusClient     modbus;
//extern rlSiemensTCPClient siemensTCP;
//extern rlPPIClient        ppi;

#define REDBUTTON "QPushButton:pressed { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, \
                   stop:0 rgba(60, 186, 162, 255), stop:1 rgba(98, 211, 162, 255)); border-style:inset;}\
                   QPushButton { color:white;background-color: #ff0000; border: 3px outset gray; border-radius: 5px;}"

#define GREENBUTTON "QPushButton:pressed { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, \
                   stop:0 rgba(60, 186, 162, 255), stop:1 rgba(98, 211, 162, 255)); border-style:inset;}\
                   QPushButton { color:black;background-color: #00ff00; border: 3px outset gray; border-radius: 5px;}"


typedef struct // (todo: define your data structure here)
{
}
DATA;

enum Docks {
    ALARM_DOCK = ID_DOCK_WIDGETS
};
	

static int slotInit(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
  //memset(d,0,sizeof(DATA));

  alarmInit(p,GroupBox_Alarm,alarmHTML,ALARM_DOCK);
  return 0;
}

static int slotNullEvent(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
  alarmNullEvent(p, alarmHTML, ALARM_DOCK);

  for(int id = Alarme1; id<=Alarme8; id++)
       if(readAlarm(id - Alarme1)) pvSetStyleSheet(p,id,REDBUTTON);
       else                        pvSetStyleSheet(p,id,GREENBUTTON);

  return 0;
}

static int slotButtonEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  int i;
  if     (id == setTestAlarm)
  {
    myalarm.set("TestAlarm");
  }
  else if(id == ackAll)
  {
    myalarm.ackAll();
    for(i = 0; i< MAX_ALARMS /32; i++)
        AlarmNotAck[i]=0;
  }
  else if(id == resetAll)
  {
     myalarm.resetAll();
      for(i = 0; i< MAX_ALARMS /32; i++)
          AlarmWord[i]=0;
  }
  return 0;
}

#include "rltime.h"

static int slotButtonPressedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;

  rlTime t;
  t.getLocalTime();
  if(id>=Alarme1 && id<=Alarme8) {
      int i = id-Alarme1;
      writeAlarm(i,!readAlarm(i));
      printf("text = [%s] [%s] [%s]\n",t.getIsoTimeString(),readAlarm(i) ? "ON" : "OFF",myalarm.table.text(2,i+1));
  }

  return 0;
}

static int slotButtonReleasedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTextEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  if(id == alarmHTML) alarmTextEvent(text);
  return 0;
}

static int slotSliderEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotCheckboxEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotRadioButtonEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotGlInitializeEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlPaintEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlResizeEvent(PARAM *p, int id, DATA *d, int width, int height)
{
  if(p == NULL || id == 0 || d == NULL || width < 0 || height < 0) return -1;
  return 0;
}

static int slotGlIdleEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTabEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotTableTextEvent(PARAM *p, int id, DATA *d, int x, int y, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || text == NULL) return -1;
  return 0;
}

static int slotTableClickedEvent(PARAM *p, int id, DATA *d, int x, int y, int button)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || button < 0) return -1;
  return 0;
}

static int slotSelectionEvent(PARAM *p, int id, DATA *d, int val, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || text == NULL) return -1;
  return 0;
}

static int slotClipboardEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotRightMouseEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  //pvPopupMenu(p,-1,"Menu1,Menu2,,Menu3");
  return 0;
}

static int slotKeyboardEvent(PARAM *p, int id, DATA *d, int val, int modifier)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || modifier < -1000) return -1;
  return 0;
}

static int slotMouseMovedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMousePressedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseReleasedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseOverEvent(PARAM *p, int id, DATA *d, int enter)
{
  if(p == NULL || id == 0 || d == NULL || enter < -1000) return -1;
  return 0;
}

static int slotUserEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}
