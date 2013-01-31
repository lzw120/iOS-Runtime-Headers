/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface  {
    SKProductPageViewController *_parentProductPageViewController;
}

@property SKProductPageViewController * parentProductPageViewController;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)parentProductPageViewController;
- (void)showStoreSheetWithRequest:(id)arg1 animated:(BOOL)arg2;
- (id)makeStoreSheetRequest;
- (void)setParentProductPageViewController:(id)arg1;

@end