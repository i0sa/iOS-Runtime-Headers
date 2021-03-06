/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString;

@interface PHObjectDeleteRequest : NSObject <PHDeleteChangeRequest> {
    NSString *_clientName;
    int _clientProcessID;
    NSManagedObjectID *_objectID;
    NSString *_uuid;
    bool_entitled;
}

@property(readonly) NSString * clientName;
@property(readonly) int clientProcessID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isEntitled,readonly) bool entitled;
@property(readonly) unsigned long long hash;
@property(readonly) NSString * managedEntityName;
@property(readonly) NSManagedObjectID * objectID;
@property(readonly) Class superclass;
@property(readonly) NSString * uuid;

+ (id)deleteRequestForObject:(id)arg1;

- (void).cxx_destruct;
- (id)clientName;
- (int)clientProcessID;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 entitled:(bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isEntitled;
- (id)managedEntityName;
- (id)objectID;
- (id)uuid;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
