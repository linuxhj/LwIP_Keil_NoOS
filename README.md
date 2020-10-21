# LwIP_Keil_NoOS
无操作系统移植LwIP

#DHCP
使用DHCP的时候，需要查询IP地址，需要注意。
最靠谱的方法就是直接进DEBUG模式，看NETIF这个变量里面的IP值。
或者在PC上使用arp -a命令查询。
在路由器上，查询客户端列表，这个不准确！！！！！不知道是什么原因。