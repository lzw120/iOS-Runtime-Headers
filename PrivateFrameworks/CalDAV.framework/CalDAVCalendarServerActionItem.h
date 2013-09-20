/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {
    CalDAVCalendarServerCancelItem *_cancel;
    CoreDAVItemWithNoChildren *_create;
    CalDAVCalendarServerReplyItem *_reply;
    CalDAVCalendarServerUpdateItem *_update;
}

@property(retain) CalDAVCalendarServerCancelItem * cancel;
@property(retain) CoreDAVItemWithNoChildren * create;
@property(retain) CalDAVCalendarServerReplyItem * reply;
@property(retain) CalDAVCalendarServerUpdateItem * update;

- (id)cancel;
- (id)copyParseRules;
- (id)create;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)reply;
- (void)setCancel:(id)arg1;
- (void)setCreate:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setUpdate:(id)arg1;
- (id)update;

@end