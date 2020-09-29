package com.example.ndkdemo;

import android.util.Log;

public class Student {
    private String name;

    public Student() {
        this.name = "zhangsan";
    }

    public String getName(String str) {
        Log.d("TAG", str+"getName: "+name);
        return name;
    }
}
