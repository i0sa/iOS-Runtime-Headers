/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ATAssetLinkController, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSPredicate, NSString;

@interface ATAssetSessionTask : ATSessionTask <ATAssetLinkControllerObserver> {
    ATAssetLinkController *_assetLinkController;
    NSString *_dataClass;
    unsigned long long _failedAssetsCount;
    NSPredicate *_filterPredicate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_remainingAssets;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    id _shouldRetryAssetBlock;
    bool_cancelAtStart;
    bool_retryUntilFinished;
    bool_waitingForRetry;
}

@property(retain) ATAssetLinkController * assetLinkController;
@property(copy,readonly) NSString * dataClass;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long failedAssetsCount;
@property(copy) NSPredicate * filterPredicate;
@property(readonly) unsigned long long hash;
@property bool retryUntilFinished;
@property(copy) id shouldRetryAssetBlock;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (id)assetLinkController;
- (void)cancel;
- (void)cancelAllAssets;
- (id)dataClass;
- (id)debugDescription;
- (unsigned long long)failedAssetsCount;
- (id)filterPredicate;
- (id)initWithDataClass:(id)arg1;
- (id)remainingAssets;
- (void)resume;
- (bool)retryUntilFinished;
- (id)sessionGroupingKey;
- (void)setAssetLinkController:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setRetryUntilFinished:(bool)arg1;
- (void)setShouldRetryAssetBlock:(id)arg1;
- (id)shouldRetryAssetBlock;
- (void)start;
- (void)suspend;

@end
