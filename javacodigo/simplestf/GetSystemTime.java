package com.mycompany.systemtime;

import java.util.Date;

public class SystemTime {

    public static void main(String[] args) {
        Date time = new Date(); /* new cria um objeto de uma determinada classe */
        System.out.println("System time is:");
        System.out.println(time.toString());
    }
}
