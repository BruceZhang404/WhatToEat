#include "widget.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QApplication>
void LoadSQL(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dishes.db");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
        return;
    }

    //QSqlQuery query;

    // // 创建dishes表
    // QString createDishesTable = R"(
    //     CREATE TABLE IF NOT EXISTS dishes (
    //         id INTEGER PRIMARY KEY AUTOINCREMENT,
    //         name TEXT NOT NULL,
    //         file_location TEXT NOT NULL,
    //         rating INTEGER NOT NULL CHECK (rating >= 0 AND rating <= 5),
    //         place,
    //         price
    //     )
    // )";
    // if (!query.exec(createDishesTable)) {
    //     qDebug() << "Failed to create dishes table:" << query.lastError().text();
    // }

    // // 创建tags表
    // QString createTagsTable = R"(
    //     CREATE TABLE IF NOT EXISTS tags (
    //         id INTEGER PRIMARY KEY AUTOINCREMENT,
    //         name TEXT NOT NULL UNIQUE
    //     )
    // )";
    // if (!query.exec(createTagsTable)) {
    //     qDebug() << "Failed to create tags table:" << query.lastError().text();
    // }

    // // 创建dish_tags表
    // QString createDishTagsTable = R"(
    //     CREATE TABLE IF NOT EXISTS dish_tags (
    //         dish_id INTEGER NOT NULL,
    //         tag_id INTEGER NOT NULL,
    //         times
    //         FOREIGN KEY (dish_id) REFERENCES dishes(id),
    //         FOREIGN KEY (tag_id) REFERENCES tags(id),
    //         PRIMARY KEY (dish_id, tag_id)
    //     )
    // )";
    // if (!query.exec(createDishTagsTable)) {
    //     qDebug() << "Failed to create dish_tags table:" << query.lastError().text();
    // }

    //创建dish_comments表
    // QString createDishCommentsTable = R"(
    //     CREATE TABLE IF NOT EXISTS dish_comments (
    //         id INTEGER PRIMARY KEY AUTOINCREMENT,
    //         dish_id INTEGER NOT NULL,
    //         comment TEXT NOT NULL,
    //         times INTEGER NOT NULL,
    //         FOREIGN KEY (dish_id) REFERENCES dishes(id)
    //     )
    // )";
    // if(!query.exec(createDishCommentsTable)){
    //     qDebug() << "Failed to create table:" << query.lastError().text();
    // }else{
    //     qDebug() <<"success";
    // }
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    //MainWindow w;
    //w.show();

    LoadSQL();


    // QString sql=QString("SELECT dish_id, tag_id FROM dish_tags");
    // QSqlQuery queryA;
    // if(!queryA.exec(sql)){
    //     qDebug()<<queryA.lastError().text();
    // }else{
    //     qDebug()<<"success";
    // }

    // while(queryA.next()){
    //     qDebug()<<queryA.value("dish_id").toInt()<<queryA.value("tag_id").toInt();
    //     //qDebug()<<queryA.value("file_location").toString();
    // }

    //从19开始



    //QSqlQuery query;
    // QString sql = "DROP TABLE IF EXISTS dish_comments";
    // if (!query.exec(sql)) {
    //     qDebug() << "Error: Failed to execute query - " << query.lastError();
    // }else{
    //     qDebug()<<"success";
    // }

    Widget w;
    w.show();


    return a.exec();
    return 0;
}


