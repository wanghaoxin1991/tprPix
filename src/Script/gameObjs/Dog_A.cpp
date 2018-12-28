/*
 * ========================= Dog_A.cpp ==========================
 *                          -- tpr --
 *                                        创建 -- 2018.12.23
 *                                        修改 -- 2018.12.23
 * ----------------------------------------------------------
 *   具象GameObj类 示范。
 * 
 * ----------------------------
 */
#include "Script/gameObjs/Dog_A.h"


//-------------------- CPP --------------------//
#include <functional>



/* ===========================================================
 *                         init
 * -----------------------------------------------------------
 * -- 应该在 调用 init 之前，创建 基础go实例（并添加到 全局容器中）
 * -- 尽量把 具象go类 做得 “工厂化” 一些。
 */
void Dog_A::init( GameObj *_goPtr ){

    assert( _goPtr != nullptr );
    goPtr = _goPtr;

    //-------- 绑定回调函数 ---------//
    goPtr->Update   = std::bind( &Dog_A::Update, (Dog_A*)this );   
    goPtr->BeAffect = std::bind( &Dog_A::BeAffect, (Dog_A*)this ); 

    //-------- 格式化 go.binary ---------//
    goPtr->binary.clear();
    goPtr->binary.resize( sizeof(Dog_A_Binary) );
    binaryPtr = (Dog_A_Binary*)&(goPtr->binary[0]); //- 绑定到本地指针










}




/* ===========================================================
 *                       bind
 * -----------------------------------------------------------
 * -- 在 “工厂”模式中，将本具象go实例，与 一个已经存在的 go实例 绑定。
 * -- 这个 go实例 的类型，应该和 本类一致。
 */
void Dog_A::bind( GameObj *_goPtr ){



}




/* ===========================================================
 *                        Update
 * -----------------------------------------------------------
 */
void Dog_A::Update(){

}



/* ===========================================================
 *                       BeAffect
 * -----------------------------------------------------------
 */
void Dog_A::BeAffect(){

}













