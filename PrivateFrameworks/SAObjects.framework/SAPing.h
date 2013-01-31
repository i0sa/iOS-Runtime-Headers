/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAPing : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)ping;
+ (id)pingWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end