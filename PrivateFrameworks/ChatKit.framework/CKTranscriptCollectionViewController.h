/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CKTranscriptCollectionViewControllerDelegate>, CKAudioController, CKConversation, CKTranscriptCollectionView, IMChat, NSArray, NSIndexSet, NSObject<OS_dispatch_group>, NSString, UITapGestureRecognizer, UIView<CKGradientReferenceView>;

@interface CKTranscriptCollectionViewController : CKViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIAlertViewDelegate, CKTranscriptCollectionViewDelegate, CKMovieBalloonViewDelegate, CKLocationShareBalloonViewDelegate, CKAudioControllerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    id _alertHandler;
    CKAudioController *_audioController;
    NSArray *_chatItems;
    CKTranscriptCollectionView *_collectionView;
    CKConversation *_conversation;
    <CKTranscriptCollectionViewControllerDelegate> *_delegate;
    UIView<CKGradientReferenceView> *_gradientReferenceView;
    NSIndexSet *_hiddenItems;
    double _leftBalloonMaxWidth;
    UITapGestureRecognizer *_loggingTapGestureRecognizer;
    } _peekSampleTranslation;
    double _rightBalloonMaxWidth;
    id _transcriptUpdateCompletion;
    NSObject<OS_dispatch_group> *_updateAnimationGroup;
    bool_hasHiddenItems;
    bool_initialLoad;
    bool_isLoadingEarlierMessages;
    bool_peeking;
    bool_transcriptUpdateAnimated;
}

@property(copy) id alertHandler;
@property(retain) CKAudioController * audioController;
@property(retain,readonly) IMChat * chat;
@property(copy) NSArray * chatItems;
@property(retain) CKTranscriptCollectionView * collectionView;
@property(retain) CKConversation * conversation;
@property(copy,readonly) NSString * debugDescription;
@property <CKTranscriptCollectionViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) UIView<CKGradientReferenceView> * gradientReferenceView;
@property bool hasHiddenItems;
@property(readonly) unsigned long long hash;
@property(copy) NSIndexSet * hiddenItems;
@property(getter=isInitialLoad) bool initialLoad;
@property bool isLoadingEarlierMessages;
@property(readonly) double leftBalloonMaxWidth;
@property(retain) UITapGestureRecognizer * loggingTapGestureRecognizer;
@property struct CGPoint { double x1; double x2; } peekSampleTranslation;
@property(getter=isPeeking) bool peeking;
@property(readonly) double rightBalloonMaxWidth;
@property(readonly) Class superclass;
@property(getter=isTranscriptUpdateAnimated) bool transcriptUpdateAnimated;
@property(copy) id transcriptUpdateCompletion;
@property(retain) NSObject<OS_dispatch_group> * updateAnimationGroup;

- (void)__handleLoggingTapped:(id)arg1;
- (void)_downgradeMessageAtIndexPath:(id)arg1;
- (id)_localLogDumpButtonTitle;
- (void)_performLocalLogDump;
- (void)_performRemoteLogDump;
- (void)_refreshLocationsForRecipientsIfNecessary;
- (id)_remoteLogDumpButtonTitle;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)_setupLoggingTapGestureRecognizer;
- (bool)_shouldShowInternalUILogging;
- (bool)_shouldShowUILogging;
- (void)_showLoggingAlertIfNecessary;
- (void)_tearDownLoggingTapGestureRecognizer;
- (void)addressBookChanged:(id)arg1;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (id)audioController;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (void)audioControllerPlayingDidChange:(id)arg1;
- (bool)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (void)balloonView:(id)arg1 copy:(id)arg2;
- (void)balloonView:(id)arg1 export:(id)arg2;
- (void)balloonView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)balloonView:(id)arg1 more:(id)arg2;
- (void)balloonView:(id)arg1 performAction:(SEL)arg2 withSender:(id)arg3;
- (void)balloonView:(id)arg1 sendAsTextMessage:(id)arg2;
- (void)balloonViewDidFinishDataDetectorAction:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (void)balloonViewWillResignFirstResponder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calloutTargetRectForBalloonView:(id)arg1;
- (bool)canRaiseToListen;
- (bool)canRaiseToTalk;
- (id)chat;
- (id)chatItemWithIMChatItem:(id)arg1;
- (id)chatItems;
- (void)chatItemsDidChange:(id)arg1;
- (void)chatRegistryDidLoad:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 chatItemForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView;
- (void)collectionViewDidInset:(id)arg1;
- (id)collectionViewLayout;
- (void)collectionViewLayoutRestingDidChange:(id)arg1;
- (void)collectionViewWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)collectionViewWillProgrammaticallyScroll:(id)arg1;
- (void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;
- (void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (void)deleteSelectedItems:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)gradientReferenceView;
- (bool)hasHiddenItems;
- (id)hiddenItems;
- (id)indexPathForBalloonView:(id)arg1;
- (id)initWithConversation:(id)arg1 rightBalloonMaxWidth:(double)arg2 leftBalloonMaxWidth:(double)arg3;
- (bool)isInitialLoad;
- (bool)isLoadingEarlierMessages;
- (bool)isPeeking;
- (bool)isTranscriptUpdateAnimated;
- (double)leftBalloonMaxWidth;
- (void)loadEarlierMessages;
- (void)loadEarlierMessagesIfNeeded;
- (void)loadView;
- (void)locationShareBalloonViewIgnoreButtonTapped:(id)arg1;
- (void)locationShareBalloonViewShareButtonTapped:(id)arg1;
- (void)locationStringDidChange:(id)arg1;
- (id)loggingTapGestureRecognizer;
- (id)menuItemsForBalloonView:(id)arg1;
- (id)messagePartForBalloonView:(id)arg1;
- (struct CGPoint { double x1; double x2; })peekSampleTranslation;
- (void)performResumeDeferredSetup;
- (void)prepareForSuspend;
- (void)previewDidChange:(id)arg1;
- (void)raiseGestureRecognized:(id)arg1;
- (void)reloadData;
- (double)rightBalloonMaxWidth;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)selectedItems;
- (void)setAlertHandler:(id)arg1;
- (void)setAudioController:(id)arg1;
- (void)setChatItems:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setGradientReferenceView:(id)arg1;
- (void)setHasHiddenItems:(bool)arg1;
- (void)setHiddenItems:(id)arg1;
- (void)setInitialLoad:(bool)arg1;
- (void)setIsLoadingEarlierMessages:(bool)arg1;
- (void)setLoggingTapGestureRecognizer:(id)arg1;
- (void)setPeekSampleTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPeeking:(bool)arg1;
- (void)setScrollAnchor:(double)arg1;
- (void)setTranscriptUpdateAnimated:(bool)arg1;
- (void)setTranscriptUpdateCompletion:(id)arg1;
- (void)setUpdateAnimationGroup:(id)arg1;
- (bool)shouldShowMenuForBalloonView:(id)arg1;
- (void)stopPlayingAudio;
- (void)touchUpInsideMessageCellFailureButton:(id)arg1;
- (void)touchUpInsideStatusCellButton:(id)arg1;
- (id)transcriptUpdateCompletion;
- (void)transferRestored:(id)arg1;
- (void)transferUpdated:(id)arg1;
- (id)updateAnimationGroup;
- (void)updateTranscript:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(bool)arg6 completion:(id)arg7;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsDrawerLayout;

@end
