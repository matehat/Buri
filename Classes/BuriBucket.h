//
//  BuriBucket.h
//  LevelDB
//
//  Created by Gideon de Kok on 10/10/12.
//  Copyright (c) 2012 Pave Labs. All rights reserved.
//

#import "Buri.h"
#import "BuriSerialization.h"

@interface BuriBucket : NSObject {
}

@property (nonatomic, strong) Buri *buri;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) Class usedClass;

- (id)initWithDB:(Buri *)aDb andObjectClass:(Class <BuriSupport>)aClass;

- (void)storeObject:(NSObject <BuriSupport> *)value;

- (id)fetchObjectForKey:(NSString *)key;

- (id)fetchObjectForBinaryIndex:(NSString *)indexField value:(NSString *)value;
- (id)fetchObjectForBinaryIndex:(NSString *)indexField data:(NSData *)value;
- (id)fetchObjectForIntegerIndex:(NSString *)indexField value:(NSNumber *)value;

- (void)deleteForKey:(NSString *)key;
- (void)deleteObject:(NSObject <BuriSupport> *)storeObject;

- (NSArray *)allKeys;
- (NSArray *)allObjects;

@end
