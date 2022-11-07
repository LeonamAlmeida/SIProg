package com.mycompany.getsyslanguage;

import java.util.Locale;

public class GetSysLanguage {

    public static void main(String[] args) {
        Locale locale = Locale.getDefault();
        System.out.println("System language is:");
        System.out.println(locale.toString());
        /* or */
        System.out.println(System.getProperty("user.language"));    
    }
}
