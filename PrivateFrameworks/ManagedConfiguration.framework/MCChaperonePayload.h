/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData;

@interface MCChaperonePayload : MCPayload {
    NSData *_pairingCertificateData;
    bool_nonChaperonePairingAllowed;
}

@property(readonly) bool nonChaperonePairingAllowed;
@property(retain,readonly) NSData * pairingCertificateData;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)nonChaperonePairingAllowed;
- (id)pairingCertificateData;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
