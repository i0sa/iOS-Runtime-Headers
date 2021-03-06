/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPLoadPredefinedQueue : SADomainCommand {
}

@property int mediaItemType;
@property bool shouldShuffle;

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (int)mediaItemType;
- (bool)requiresResponse;
- (void)setMediaItemType:(int)arg1;
- (void)setShouldShuffle:(bool)arg1;
- (bool)shouldShuffle;

@end
