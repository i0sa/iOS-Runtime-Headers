/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDate, TSUColor, TSWPChangeSession, TSWPStorage;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying> {
    NSDate *_date;
    int _kind;
    TSWPStorage *_parentStorage;
    TSWPChangeSession *_session;
    bool_hidden;
}

@property(readonly) TSUColor * changeAdornmentsColor;
@property(retain) NSDate * date;
@property(getter=isHidden) bool hidden;
@property(readonly) bool isDeletion;
@property(readonly) bool isInsertion;
@property TSWPStorage * parentStorage;
@property(retain) TSWPChangeSession * session;
@property(readonly) bool showsHiddenDeletionMarkup;
@property(readonly) bool showsMarkup;
@property(readonly) TSUColor * textMarkupColor;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)changeAdornmentsColor;
- (id)copyWithContext:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (bool)isDeletion;
- (bool)isFromChangeSession:(id)arg1;
- (bool)isHidden;
- (bool)isInsertion;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1 key:(id)arg2;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (id)session;
- (void)setDate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)showsHiddenDeletionMarkup;
- (bool)showsMarkup;
- (id)textMarkupColor;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
