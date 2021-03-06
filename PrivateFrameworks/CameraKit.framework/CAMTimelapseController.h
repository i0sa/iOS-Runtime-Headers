/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMLowDiskSpaceAlertView, CAMTimelapseState, NSCountedSet, NSDate, NSMutableSet, NSObject<OS_dispatch_source>, NSString;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate> {
    NSObject<OS_dispatch_source> *__captureTimer;
    CAMLowDiskSpaceAlertView *__diskSpaceAlert;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CAMTimelapseState *__state;
    bool__backendRecoveryNeeded;
    bool__ignoringTimerCallbacksForTearDown;
    bool__ignoringTimerCallbacksWaitingForCaptureResponse;
    bool__previewStarted;
}

@property(setter=_setBackendRecoveryNeeded:) bool _backendRecoveryNeeded;
@property(readonly) NSObject<OS_dispatch_source> * _captureTimer;
@property(readonly) CAMLowDiskSpaceAlertView * _diskSpaceAlert;
@property(readonly) bool _ignoringTimerCallbacksForTearDown;
@property(readonly) bool _ignoringTimerCallbacksWaitingForCaptureResponse;
@property(readonly) NSCountedSet * _inFlightTimelapseUUIDs;
@property(readonly) NSMutableSet * _pendingCompletedStates;
@property(setter=_setPreviewStarted:) bool _previewStarted;
@property(readonly) CAMTimelapseState * _state;
@property(readonly) NSDate * captureStartTime;
@property(getter=isCapturing,readonly) bool capturing;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)_videoPreviewImageForTimelapseState:(id)arg1;
+ (id)createPlaceholderAssetResponseForTimelapseState:(id)arg1;
+ (void)recoverFromCrashIfNeededForceEndLastSession:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (bool)_backendRecoveryNeeded;
- (id)_captureTimer;
- (void)_captureTimerFired;
- (id)_createPlaceholderAssetForTimelapseState:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (id)_diskSpaceAlert;
- (void)_dismissDiskSpaceAlert;
- (bool)_enqueueCaptureRequest;
- (bool)_ignoringTimerCallbacksForTearDown;
- (bool)_ignoringTimerCallbacksWaitingForCaptureResponse;
- (id)_inFlightTimelapseUUIDs;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (id)_pendingCompletedStates;
- (void)_prepareForTimelapseCapture;
- (void)_previewStarted:(id)arg1;
- (bool)_previewStarted;
- (bool)_reserveDiskSpaceForTimelapseUUID:(id)arg1;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_restoreCaptureStateFromDisk;
- (void)_saveStateToDisk:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_setBackendRecoveryNeeded:(bool)arg1;
- (void)_setNewCaptureState;
- (void)_setPreviewStarted:(bool)arg1;
- (void)_startCaptureTimer;
- (bool)_startCapturing;
- (id)_state;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (void)_teardownCaptureTimer;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_updateFocusAndExposureForStopCapturing;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(bool)arg3;
- (void)_updateLocationIfNecessary;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (id)captureStartTime;
- (void)dealloc;
- (id)init;
- (bool)isCapturing;
- (void)restoreConfiguration;
- (bool)startCapturing;
- (void)stopCapturingWithReasons:(long long)arg1;

@end
