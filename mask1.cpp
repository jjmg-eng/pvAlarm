////////////////////////////////////////////////////////////////////////////
//
// show_mask1 for ProcessViewServer created: Mi. Okt 20 08:43:44 2010
//
////////////////////////////////////////////////////////////////////////////
#include "pvapp.h"

// _begin_of_generated_area_ (do not edit -> use ui2pvc) -------------------

// our mask contains the following objects
enum {
  ID_MAIN_WIDGET = 0,
  GroupBox_Alarm,
  alarmHTML,
  setTestAlarm,
  ackAll,
  resetAll,
  Alarme1,
  Alarme2,
  Alarme3,
  Alarme4,
  Alarme5,
  Alarme6,
  Alarme7,
  Alarme8,
  ID_END_OF_WIDGETS
};

// our mask contains the following widget names
  static const char *widgetName[] = {
  "ID_MAIN_WIDGET",
  "GroupBox_Alarm",
  "alarmHTML",
  "setTestAlarm",
  "ackAll",
  "resetAll",
  "Alarme1",
  "Alarme2",
  "Alarme3",
  "Alarme4",
  "Alarme5",
  "Alarme6",
  "Alarme7",
  "Alarme8",
  "ID_END_OF_WIDGETS",
  ""};

  static const char *toolTip[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const char *whatsThis[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const int widgetType[ID_END_OF_WIDGETS+1] = {
  0,
  TQGroupBox,
  TQTextBrowser,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  TQPushButton,
  -1 };

static int generated_defineMask(PARAM *p)
{
  int w,h,depth;

  if(p == NULL) return 1;
  if(widgetName[0] == NULL) return 1; // suppress unused warning
  w = h = depth = strcmp(toolTip[0],whatsThis[0]);
  if(widgetType[0] == -1) return 1;
  if(w==h) depth=0; // fool the compiler
  pvStartDefinition(p,ID_END_OF_WIDGETS);

  pvQGroupBox(p,GroupBox_Alarm,0,-1,HORIZONTAL,pvtr(""));
  pvSetGeometry(p,GroupBox_Alarm,25,20,580,144);
  pvSetFont(p,GroupBox_Alarm,"Ubuntu",11,0,0,0,0);

  pvQTextBrowser(p,alarmHTML,GroupBox_Alarm);
  pvSetGeometry(p,alarmHTML,5,1,570,110);
  pvSetFont(p,alarmHTML,"Arial",10,0,0,0,0);

  pvQPushButton(p,setTestAlarm,0);
  pvSetGeometry(p,setTestAlarm,610,20,125,30);
  pvSetText(p,setTestAlarm,pvtr("Set TestAlarm"));
  pvSetFont(p,setTestAlarm,"Sans Serif",10,0,0,0,0);

  pvQPushButton(p,ackAll,0);
  pvSetGeometry(p,ackAll,610,60,125,30);
  pvSetText(p,ackAll,pvtr("Ack All"));
  pvSetFont(p,ackAll,"Sans Serif",10,0,0,0,0);

  pvQPushButton(p,resetAll,0);
  pvSetGeometry(p,resetAll,610,100,125,30);
  pvSetText(p,resetAll,pvtr("Reset All"));
  pvSetFont(p,resetAll,"Sans Serif",10,0,0,0,0);

  pvQPushButton(p,Alarme1,0);
  pvSetGeometry(p,Alarme1,24,180,99,30);
  pvSetText(p,Alarme1,pvtr("Alarme 1"));
  pvSetFont(p,Alarme1,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,Alarme2,0);
  pvSetGeometry(p,Alarme2,129,180,99,30);
  pvSetText(p,Alarme2,pvtr("Alarme 2"));
  pvSetFont(p,Alarme2,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,Alarme3,0);
  pvSetGeometry(p,Alarme3,234,180,99,30);
  pvSetText(p,Alarme3,pvtr("Alarme 3"));
  pvSetFont(p,Alarme3,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,Alarme4,0);
  pvSetGeometry(p,Alarme4,339,180,99,30);
  pvSetText(p,Alarme4,pvtr("Alarme 4"));
  pvSetFont(p,Alarme4,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,Alarme5,0);
  pvSetGeometry(p,Alarme5,24,219,99,30);
  pvSetText(p,Alarme5,pvtr("Alarme 5"));
  pvSetFont(p,Alarme5,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,Alarme6,0);
  pvSetGeometry(p,Alarme6,129,219,99,30);
  pvSetText(p,Alarme6,pvtr("Alarme 6"));
  pvSetFont(p,Alarme6,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,Alarme7,0);
  pvSetGeometry(p,Alarme7,234,219,99,30);
  pvSetText(p,Alarme7,pvtr("Alarme 7"));
  pvSetFont(p,Alarme7,"Ubuntu",11,0,0,0,0);

  pvQPushButton(p,Alarme8,0);
  pvSetGeometry(p,Alarme8,339,219,99,30);
  pvSetText(p,Alarme8,pvtr("Alarme 8"));
  pvSetFont(p,Alarme8,"Ubuntu",11,0,0,0,0);


  pvEndDefinition(p);
  return 0;
}

// _end_of_generated_area_ (do not edit -> use ui2pvc) ---------------------

#include "mask1_slots.h"

static int defineMask(PARAM *p)
{
  if(p == NULL) return 1;
  generated_defineMask(p);
  // (todo: add your code here)
  return 0;
}


static int showData(PARAM *p, DATA *d)
{
  if(p == NULL) return 1;
  if(d == NULL) return 1;
  return 0;
}

static int readData(DATA *d) // from shared memory, database or something else
{
  if(d == NULL) return 1;
  // (todo: add your code here)
  return 0;
}


int show_mask1(PARAM *p)
{
  DATA d;
  char event[MAX_EVENT_LENGTH];
  char text[MAX_EVENT_LENGTH];
  char str1[MAX_EVENT_LENGTH];
  int  i,w,h,val,x,y,button,ret;
  float xval, yval;

  defineMask(p);
  //rlSetDebugPrintf(1);
  if((ret=slotInit(p,&d)) != 0) return ret;
  readData(&d); // from shared memory, database or something else
  showData(p,&d);
  while(1)
  {
    pvPollEvent(p,event);
    switch(pvParseEvent(event, &i, text))
    {
      case NULL_EVENT:
        readData(&d); // from shared memory, database or something else
        showData(p,&d);
        if((ret=slotNullEvent(p,&d)) != 0) return ret;
        break;
      case BUTTON_EVENT:
        if(trace) printf("BUTTON_EVENT id=%d\n",i);
        if((ret=slotButtonEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_PRESSED_EVENT:
        if(trace) printf("BUTTON_PRESSED_EVENT id=%d\n",i);
        if((ret=slotButtonPressedEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_RELEASED_EVENT:
        if(trace) printf("BUTTON_RELEASED_EVENT id=%d\n",i);
        if((ret=slotButtonReleasedEvent(p,i,&d)) != 0) return ret;
        break;
      case TEXT_EVENT:
        if(trace) printf("TEXT_EVENT id=%d %s\n",i,text);
        if((ret=slotTextEvent(p,i,&d,text)) != 0) return ret;
        break;
      case SLIDER_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("SLIDER_EVENT val=%d\n",val);
        if((ret=slotSliderEvent(p,i,&d,val)) != 0) return ret;
        break;
      case CHECKBOX_EVENT:
        if(trace) printf("CHECKBOX_EVENT id=%d %s\n",i,text);
        if((ret=slotCheckboxEvent(p,i,&d,text)) != 0) return ret;
        break;
      case RADIOBUTTON_EVENT:
        if(trace) printf("RADIOBUTTON_EVENT id=%d %s\n",i,text);
        if((ret=slotRadioButtonEvent(p,i,&d,text)) != 0) return ret;
        break;
      case GL_INITIALIZE_EVENT:
        if(trace) printf("you have to call initializeGL()\n");
        if((ret=slotGlInitializeEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_PAINT_EVENT:
        if(trace) printf("you have to call paintGL()\n");
        if((ret=slotGlPaintEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_RESIZE_EVENT:
        sscanf(text,"(%d,%d)",&w,&h);
        if(trace) printf("you have to call resizeGL(w,h)\n");
        if((ret=slotGlResizeEvent(p,i,&d,w,h)) != 0) return ret;
        break;
      case GL_IDLE_EVENT:
        if((ret=slotGlIdleEvent(p,i,&d)) != 0) return ret;
        break;
      case TAB_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("TAB_EVENT(%d,page=%d)\n",i,val);
        if((ret=slotTabEvent(p,i,&d,val)) != 0) return ret;
        break;
      case TABLE_TEXT_EVENT:
        sscanf(text,"(%d,%d,",&x,&y);
        pvGetText(text,str1);
        if(trace) printf("TABLE_TEXT_EVENT(%d,%d,\"%s\")\n",x,y,str1);
        if((ret=slotTableTextEvent(p,i,&d,x,y,str1)) != 0) return ret;
        break;
      case TABLE_CLICKED_EVENT:
        sscanf(text,"(%d,%d,%d)",&x,&y,&button);
        if(trace) printf("TABLE_CLICKED_EVENT(%d,%d,button=%d)\n",x,y,button);
        if((ret=slotTableClickedEvent(p,i,&d,x,y,button)) != 0) return ret;
        break;
      case SELECTION_EVENT:
        sscanf(text,"(%d,",&val);
        pvGetText(text,str1);
        if(trace) printf("SELECTION_EVENT(column=%d,\"%s\")\n",val,str1);
        if((ret=slotSelectionEvent(p,i,&d,val,str1)) != 0) return ret;
        break;
      case CLIPBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("CLIPBOARD_EVENT(id=%d)\n",val);
        if(trace) printf("clipboard = \n%s\n",p->clipboard);
        if((ret=slotClipboardEvent(p,i,&d,val)) != 0) return ret;
        break;
      case RIGHT_MOUSE_EVENT:
        if(trace) printf("RIGHT_MOUSE_EVENT id=%d text=%s\n",i,text);
        if((ret=slotRightMouseEvent(p,i,&d,text)) != 0) return ret;
        break;
      case KEYBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("KEYBOARD_EVENT modifier=%d key=%d\n",i,val);
        if((ret=slotKeyboardEvent(p,i,&d,val,i)) != 0) return ret;
        break;
      case PLOT_MOUSE_MOVED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_MOVE %f %f\n",xval,yval);
        if((ret=slotMouseMovedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_PRESSED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_PRESSED %f %f\n",xval,yval);
        if((ret=slotMousePressedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_RELEASED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_RELEASED %f %f\n",xval,yval);
        if((ret=slotMouseReleasedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case MOUSE_OVER_EVENT:
        sscanf(text,"%d",&val);
        if(trace) printf("MOUSE_OVER_EVENT %d\n",val);
        if((ret=slotMouseOverEvent(p,i,&d,val)) != 0) return ret;
        break;
      case USER_EVENT:
        if(trace) printf("USER_EVENT id=%d %s\n",i,text);
        if((ret=slotUserEvent(p,i,&d,text)) != 0) return ret;
        break;
      default:
        if(trace) printf("UNKNOWN_EVENT id=%d %s\n",i,text);
        break;
    }
  }
}
