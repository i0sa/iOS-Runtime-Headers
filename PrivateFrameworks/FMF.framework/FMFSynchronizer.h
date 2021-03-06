/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@class NSObject<OS_dispatch_semaphore>, NSString;

@interface FMFSynchronizer : NSObject {
    NSString *_info;
    NSObject<OS_dispatch_semaphore> *_sem;
    double _timeout;
    bool_timeoutOccurred;
}

@property(retain) NSString * info;
@property(retain) NSObject<OS_dispatch_semaphore> * sem;
@property double timeout;
@property bool timeoutOccurred;

- (void).cxx_destruct;
- (id)info;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;
- (id)loggingID;
- (id)sem;
- (void)setInfo:(id)arg1;
- (void)setSem:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimeoutOccurred:(bool)arg1;
- (void)signal;
- (double)timeout;
- (bool)timeoutOccurred;
- (void)wait;

@end
