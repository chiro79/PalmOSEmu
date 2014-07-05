// generated by Fast Light User Interface Designer (fluid) version 1.0008

#ifndef HelpApp_h
#define HelpApp_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <string.h>
#include <FL/fl_ask.H>
#include "HelpView.h"
#include <FL/Fl_Box.H>
#include <FL/Fl_Pack.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <stdlib.h>
#include <FL/Fl_Group.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Menu_Button.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Return_Button.H>

class HelpApp {
  static Fl_Menu_Item *bookmenu_;
  static HelpApp *first_;
  struct bookmark { char title[256], url[1024]; };
  static int nbookmarks_;
  static bookmark *bookmarks_;
  static int prop_bookmark_;
  static char homepage_[1024];
  static char proxy_[1024];
  int index_;
  int max_;
  HelpApp *next_;
  int line_[100];
  char file_[100][256];
  static void add_bookmark(const char *title, const char *url);
  static const char *link(const char *f);
  static void load_bookmarks();
  static void save_bookmarks();
  static void set_status(const char *format, ...);
  void back();
  void forward();
  void edit_bookmarks();
  void list_cb(int clicks);
  void prop_cb();
  void show_bookmark();
public:
  HelpApp();
private:
  Fl_Window *window_;
  HelpView *view_;
  inline void cb_view__i(HelpView*, void*);
  static void cb_view_(HelpView*, void*);
  Fl_Box *status_;
  Fl_Pack *toolbar_;
  Fl_Button *back_;
  inline void cb_back__i(Fl_Button*, void*);
  static void cb_back_(Fl_Button*, void*);
  Fl_Button *forward_;
  inline void cb_forward__i(Fl_Button*, void*);
  static void cb_forward_(Fl_Button*, void*);
  Fl_Button *smaller_;
  inline void cb_smaller__i(Fl_Button*, void*);
  static void cb_smaller_(Fl_Button*, void*);
  Fl_Button *larger_;
  inline void cb_larger__i(Fl_Button*, void*);
  static void cb_larger_(Fl_Button*, void*);
  Fl_Button *home_;
  inline void cb_home__i(Fl_Button*, void*);
  static void cb_home_(Fl_Button*, void*);
  Fl_Button *reload_;
  inline void cb_reload__i(Fl_Button*, void*);
  static void cb_reload_(Fl_Button*, void*);
  Fl_Button *stop_;
  Fl_Menu_Bar *menubar_;
  static Fl_Menu_Item menu_menubar_[];
  inline void cb_New_i(Fl_Menu_*, void*);
  static void cb_New(Fl_Menu_*, void*);
  inline void cb_Close_i(Fl_Menu_*, void*);
  static void cb_Close(Fl_Menu_*, void*);
  inline void cb_Set_i(Fl_Menu_*, void*);
  static void cb_Set(Fl_Menu_*, void*);
  inline void cb_Set1_i(Fl_Menu_*, void*);
  static void cb_Set1(Fl_Menu_*, void*);
  inline void cb_E_i(Fl_Menu_*, void*);
  static void cb_E(Fl_Menu_*, void*);
  Fl_Group *locationbar_;
  Fl_Input *location_;
  inline void cb_location__i(Fl_Input*, void*);
  static void cb_location_(Fl_Input*, void*);
  Fl_Menu_Button *bookmark_;
  inline void cb_bookmark__i(Fl_Menu_Button*, void*);
  static void cb_bookmark_(Fl_Menu_Button*, void*);
  static Fl_Menu_Item menu_bookmark_[];
  inline void cb_Add_i(Fl_Menu_*, void*);
  static void cb_Add(Fl_Menu_*, void*);
  inline void cb_Edit_i(Fl_Menu_*, void*);
  static void cb_Edit(Fl_Menu_*, void*);
  Fl_Window *bmWindow_;
  Fl_Browser *bmList_;
  inline void cb_bmList__i(Fl_Browser*, void*);
  static void cb_bmList_(Fl_Browser*, void*);
  Fl_Menu_Bar *bmMenubar_;
  static Fl_Menu_Item menu_bmMenubar_[];
  static Fl_Menu_Item *bmDelete_;
  static Fl_Menu_Item *bmMoveUp_;
  static Fl_Menu_Item *bmMoveDown_;
  static Fl_Menu_Item *bmProperties_;
  inline void cb_bmProperties__i(Fl_Menu_*, void*);
  static void cb_bmProperties_(Fl_Menu_*, void*);
  inline void cb_Close1_i(Fl_Menu_*, void*);
  static void cb_Close1(Fl_Menu_*, void*);
  Fl_Window *propWindow_;
  Fl_Input *propTitle_;
  Fl_Input *propURL_;
  inline void cb_Cancel_i(Fl_Button*, void*);
  static void cb_Cancel(Fl_Button*, void*);
  inline void cb_OK_i(Fl_Return_Button*, void*);
  static void cb_OK(Fl_Return_Button*, void*);
public:
  int h();
  void hide();
  void load(const char *f);
  void position(int xx, int yy);
  void resize(int xx, int yy, int ww, int hh);
  void show();
  void textsize(uchar s);
  uchar textsize();
  void topline(const char *n);
  void topline(int n);
  int visible();
  int w();
  int x();
  int y();
};
#endif