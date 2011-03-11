/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUScriptNavigationItem>, UINavigationItem, NSString;

@interface SUScriptNavigationItem : SUScriptObject  {
    id _scriptLeftItem;
    id _scriptRightItem;
}

@property(readonly) UINavigationItem * nativeNavigationItem;
@property(retain) NSString * prompt;
@property(retain) NSString * title;
@property id hidesBackButton;
@property(retain) <SUScriptNavigationItem> * leftItem;
@property(retain) <SUScriptNavigationItem> * rightItem;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void)setHidesBackButton:(id)arg1;
- (id)prompt;
- (id)hidesBackButton;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (id)title;
- (void)setPrompt:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (id)_copyPrompt;
- (void)_setPrompt:(id)arg1;
- (id)nativeNavigationItem;
- (id)_copyLeftItem;
- (id)_copyRightItem;
- (BOOL)_hidesBackButton;
- (void)_setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightItem:(id)arg1 animated:(BOOL)arg2;
- (id)_copyScriptButtonForButtonItem:(id)arg1;
- (id)_copyScriptObjectForButtonItem:(id)arg1;
- (void)_setScriptLeftItem:(id)arg1;
- (void)_setScriptRightItem:(id)arg1;
- (id)_copyTitle;
- (id)attributeKeys;
- (void)_setTitle:(id)arg1;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
- (id)rightItem;
- (id)leftItem;
- (id)initWithNativeNavigationItem:(id)arg1;
- (void)setLeftItem:(id)arg1;
- (void)setRightItem:(id)arg1;
- (id)scriptAttributeKeys;
- (void)tearDownUserInterface;
- (id)_className;

@end