/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable> {
}

@property long long code;
@property(copy) NSArray * commandReferences;
@property(copy) NSArray * commands;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)resultCallback;
+ (id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2;

- (long long)code;
- (id)commandReferences;
- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCode:(long long)arg1;
- (void)setCommandReferences:(id)arg1;
- (void)setCommands:(id)arg1;

@end
