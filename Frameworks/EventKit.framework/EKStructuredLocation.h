/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class CLLocation, NSString;

@interface EKStructuredLocation : EKObject <NSCopying> {
}

@property(retain) NSString * address;
@property(copy) NSString * addressBookEntityID;
@property(retain) CLLocation * geoLocation;
@property(readonly) bool isStructured;
@property double radius;
@property(retain) NSString * routing;
@property(retain) NSString * title;

+ (id)locationWithTitle:(id)arg1;

- (id)_asCalLocation;
- (id)_persistentLocation;
- (id)address;
- (id)addressBookEntityID;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)geoLocation;
- (id)humanReadableContactString;
- (id)init;
- (bool)isEqualToLocation:(id)arg1;
- (bool)isStructured;
- (double)radius;
- (id)routing;
- (void)setAddress:(id)arg1;
- (void)setAddressBookEntityID:(id)arg1;
- (void)setGeoLocation:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setRouting:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updatePersistentObject;

@end
