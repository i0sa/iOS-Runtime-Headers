/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding> {
    long long _count;
    NSString *_coverPhotoIdentifier;
    NSString *_identifier;
    NSString *_name;
    bool_canUpload;
    bool_isDefaultAlbum;
}

@property bool canUpload;
@property long long count;
@property(retain) NSString * coverPhotoIdentifier;
@property(retain) NSString * identifier;
@property bool isDefaultAlbum;
@property(retain) NSString * name;

+ (id)albumWithDataDictionary:(id)arg1;
+ (id)albumsWithAlbumDataDictionaries:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canUpload;
- (long long)count;
- (id)coverPhotoIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultAlbum;
- (id)name;
- (void)setCanUpload:(bool)arg1;
- (void)setCount:(long long)arg1;
- (void)setCoverPhotoIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDefaultAlbum:(bool)arg1;
- (void)setName:(id)arg1;

@end