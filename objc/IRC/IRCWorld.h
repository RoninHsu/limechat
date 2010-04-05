// Created by Satoshi Nakagawa.
// You can redistribute it and/or modify it under the Ruby's license or the GPL2.

#import <Cocoa/Cocoa.h>
#import "LimeChatApplication.h"
#import "MainWindow.h"
#import "ServerTreeView.h"
#import "InputTextField.h"
#import "ChatBox.h"
#import "FieldEditorTextView.h"
#import "MemberListView.h"
#import "LogController.h"
#import "IRCWorldConfig.h"


@interface IRCWorld : NSObject
{
	LimeChatApplication* app;
	MainWindow* window;
	ServerTreeView* tree;
	InputTextField* text;
	NSBox* logBase;
	NSBox* consoleBase;
	ChatBox* chatBox;
	FieldEditorTextView* fieldEditor;
	MemberListView* memberList;
	id menuController;
	id dcc;
	id viewTheme;
	NSMenuItem* serverMenu;
	NSMenuItem* channelMenu;
	NSMenu* treeMenu;
	NSMenu* logMenu;
	NSMenu* consoleMenu;
	NSMenu* urlMenu;
	NSMenu* addrMenu;
	NSMenu* chanMenu;
	NSMenu* memberMenu;
	
	LogController* consoleLog;
	LogController* dummyLog;
	
	IRCWorldConfig* config;
	NSMutableArray* clients;
	
	int itemId;
	BOOL reloadingTree;
	id selectedItem;
}

@property (nonatomic, assign) LimeChatApplication* app;
@property (nonatomic, assign) MainWindow* window;
@property (nonatomic, assign) ServerTreeView* tree;
@property (nonatomic, assign) InputTextField* text;
@property (nonatomic, assign) NSBox* logBase;
@property (nonatomic, assign) NSBox* consoleBase;
@property (nonatomic, assign) ChatBox* chatBox;
@property (nonatomic, assign) FieldEditorTextView* fieldEditor;
@property (nonatomic, assign) MemberListView* memberList;
@property (nonatomic, assign) id menuController;
@property (nonatomic, assign) id dcc;
@property (nonatomic, assign) id viewTheme;
@property (nonatomic, assign) NSMenuItem* serverMenu;
@property (nonatomic, assign) NSMenuItem* channelMenu;
@property (nonatomic, assign) NSMenu* treeMenu;
@property (nonatomic, assign) NSMenu* logMenu;
@property (nonatomic, assign) NSMenu* consoleMenu;
@property (nonatomic, assign) NSMenu* urlMenu;
@property (nonatomic, assign) NSMenu* addrMenu;
@property (nonatomic, assign) NSMenu* chanMenu;
@property (nonatomic, assign) NSMenu* memberMenu;

@property (nonatomic, readonly) NSMutableArray* clients;
@property (nonatomic, readonly) id selected;

- (void)setup:(IRCWorldConfig*)seed;
- (void)setupTree;
- (void)onTimer;
- (void)autoConnect;

@end