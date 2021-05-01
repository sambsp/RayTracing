#include <iostream>

/**
 * 定义一个球体
 * 定义一个材质
 * 绑定材质到球体
 * 定义环境光
 * 定义像素窗口
 * for (每个像素）
 *  从像素中心向对象投射一束光线
 *  计算光线与对象直接的最近碰撞点
 *  if (光线与某一对象发生碰撞)
 *      通过对象的材质以及光照计算像素的颜色值
 *  else
 *      将像素的颜色值设定为黑色
 * @return
 *
 * 采用模式：ECS（Actor、ActorComponent、x）
 * 目标：不使用第三方库
 */

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
