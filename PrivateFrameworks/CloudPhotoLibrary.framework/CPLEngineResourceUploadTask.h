/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CPLEngineTransportTask>, CPLResource;

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask {
    id _cancelHandler;
    CPLResource *_cloudResource;
    id _completionHandler;
    id _didStartHandler;
    id _launchHandler;
    id _progressHandler;
    <CPLEngineTransportTask> *_transportTask;
    bool_backgroundTask;
}

@property(getter=isBackgroundTask) bool backgroundTask;
@property(readonly) id cancelHandler;
@property(retain) CPLResource * cloudResource;
@property(readonly) id completionHandler;
@property(readonly) id didStartHandler;
@property(readonly) id launchHandler;
@property(readonly) id progressHandler;
@property(retain) <CPLEngineTransportTask> * transportTask;

- (void).cxx_destruct;
- (id)cancelHandler;
- (void)cancelTask;
- (id)cloudResource;
- (id)completionHandler;
- (id)didStartHandler;
- (id)initWithLaunchHandler:(id)arg1 cancelHandler:(id)arg2 didStartHandler:(id)arg3 progressHandler:(id)arg4 completionHandler:(id)arg5;
- (bool)isBackgroundTask;
- (void)launch;
- (id)launchHandler;
- (id)progressHandler;
- (void)setBackgroundTask:(bool)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTransportTask:(id)arg1;
- (id)transportTask;

@end
