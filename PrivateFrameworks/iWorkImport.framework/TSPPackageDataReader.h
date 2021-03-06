/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, NSURL, TSPDocumentProperties, TSPPackage;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate> {
    NSURL *_URL;
    TSPPackage *_package;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) TSPDocumentProperties * documentProperties;
@property(readonly) unsigned long long hash;
@property(readonly) bool isPasswordProtected;
@property(readonly) bool isValid;
@property(readonly) long long packageType;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (bool)checkPassword:(id)arg1;
- (id)documentProperties;
- (bool)hasDataAtRelativePath:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;
- (bool)isPasswordProtected;
- (bool)isValid;
- (struct CGDataProvider { }*)newCGDataProviderAtRelativePath:(id)arg1;
- (struct CGImage { }*)newCGImageAtRelativePath:(id)arg1;
- (struct CGImageSource { }*)newCGImageSourceAtRelativePath:(id)arg1;
- (long long)packageType;
- (void)performReadUsingAccessor:(id)arg1;

@end
