/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFMailComposeViewDelegate>, DOMHTMLDocument, DOMHTMLElement, MFGenericAttachmentStore;

@interface MFComposeBodyField : UIWebDocumentView {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    unsigned int _isDirty : 1;
    unsigned int _forwardingNotification : 1;
    unsigned int _replaceAttachments : 1;
    unsigned int _isLoading : 1;
    unsigned int _needsReplaceImages : 1;
    MFGenericAttachmentStore *_attachmentStore;
    DOMHTMLElement *_blockquote;
    DOMHTMLElement *_body;
    DOMHTMLDocument *_document;
    } _layoutSize;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    } _originalSize;
    BOOL _prefersFirstLineSelection;
    int _preventLayout;
    } _rangeToSelect;
    BOOL _shouldShowStandardButtons;
}

@property BOOL shouldShowStandardButtons;

+ (void)addAdditionalItemsToCalloutBar;

- (id)_addInlineAttachmentWithData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (void)_finishedLoadingURLRequest:(id)arg1 success:(BOOL)arg2;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (void)_nts_AddDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)_removeInlineAttachment:(id)arg1;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (void)addDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1;
- (void)addMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)addSelectedAttachmentsToPasteboard:(id)arg1;
- (void)appendMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)appendQuotedMarkupString:(id)arg1 baseURL:(id)arg2;
- (BOOL)becomeFirstResponder;
- (void)beginPreventingLayout;
- (void)changeQuoteLevel:(int)arg1;
- (BOOL)containsRichText;
- (float)contentWidth;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)deferredBecomeFirstResponder;
- (void)deleteNode:(id)arg1;
- (void)deleteRange:(id)arg1;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)didUndoOrRedo:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (void)endPreventingLayout;
- (void)ensureSelection;
- (void)htmlString:(id*)arg1 otherHtmlStringsAndAttachments:(id*)arg2 charsets:(id*)arg3 withAttachmentSource:(id)arg4;
- (id)htmlString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3;
- (void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
- (id)insertTemporarySelectionMarkersForRange:(id)arg1;
- (void)invalidate;
- (BOOL)isDirty;
- (BOOL)isForwardingNotification;
- (void)layoutWithMinimumSize;
- (void)paste:(id)arg1;
- (id)plainTextAlternative;
- (id)plainTextContentWithAttachmentSource:(id)arg1;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)prependString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfElementWithID:(id)arg1;
- (void)removeBlockQuoteFromTree:(id)arg1;
- (void)replaceImages;
- (void)replaceImagesIfNecessary;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)restoreSelectionFromTemporaryMarkers:(BOOL)arg1;
- (void)restoreSelectionFromTemporaryMarkers;
- (void)saveSelectionForUndo;
- (void)scaleImagesToScale:(unsigned int)arg1 withAttachmentStore:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (void)setAttachmentStore:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLayoutInterval:(int)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setMailComposeViewDelegate:(id)arg1;
- (void)setMarkupString:(id)arg1 baseURL:(id)arg2 quote:(BOOL)arg3;
- (void)setMarkupString:(id)arg1;
- (void)setPinHeight:(float)arg1;
- (void)setPrefersFirstLineSelection;
- (void)setReplaceAttachmentsWithFilename:(BOOL)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5;
- (void)setShouldShowStandardButtons:(BOOL)arg1;
- (BOOL)shouldShowStandardButtons;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (id)temporaryEndingSelectionMarker;
- (void)unscaleImages;
- (void)updateQuoteLevelMenu;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
- (void)webViewDidChange:(id)arg1;
- (void)webViewDidDraw:(id)arg1;

@end
