//
//  FMDBTempDBTests.h
//  fmdb
//
//  Created by Graham Dennis on 24/11/2013.
//
//

#import <XCTest/XCTest.h>
#import "FMDatabase.h"

@protocol FMDBTempDBTests <NSObject>

@optional
// 打开一个空的数据库，然后进行操作。一般是create table语句
+ (void)populateDatabase:(FMDatabase *)database;

@end

@interface FMDBTempDBTests : XCTestCase <FMDBTempDBTests>

@property FMDatabase *db;
@property (readonly) NSString *databasePath;

@end
